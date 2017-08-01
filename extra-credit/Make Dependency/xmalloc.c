/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : xmalloc                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : xmalloc.c                            ***/
/***                    Author      : Frank Pernice                        ***/
/***                    Student ID  : 107656300                            ***/
/***                    Version     : 1.0                                  ***/
/***                    Date        : 19 October 2014                      ***/
/*****************************************************************************/
/*****************************************************************************/

/*===========================================================================*/
/* Headers                                                                   */
/*===========================================================================*/
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sysexits.h>

/*===========================================================================*/
/* Internal Data Structures and Types                                        */
/*===========================================================================*/
typedef enum {false, true} bool;

struct list
{
  void* ptr;
  size_t bytes;
  bool allocated;
  struct list *next;
};

typedef struct list ptr_t;


/*===========================================================================*/
/* Global Variables                                                          */
/*===========================================================================*/
static ptr_t *root; //root node of the linked list
static bool initialized = false; //is linked list initialized?

/*===========================================================================*/
/* Private Function Prototypes                                               */
/*===========================================================================*/
static void allocate(void* ptr, int size);
static void initRootNode();
static bool deallocate(void* ptr);
static void terminate(void);
static void checkLeaks(void);
static void freeList(void);
static inline void initNode(ptr_t *node);

/*===========================================================================*/
/* Public Functions                                                          */
/*===========================================================================*/

/**
 * Memory-managed `malloc` function
 *
 * @params size = number of bytes to be allocated
 *
 */
void* xmalloc(size_t size)
{
  void* ptr;
  
  if(size <=0)
  {
    fprintf(stderr, "XMALLOC WARNING: passed allocation size is too small\n");
    exit(EX_DATAERR);
  }
  else
    ptr = malloc(size);


  if(NULL == ptr)
  {
    fprintf(stderr,"XMALLOC ERROR: Insufficient memory to perform"
                   "allocation\n");
    exit(EX_DATAERR);
  }

  allocate(ptr, size);

  return ptr;
}


/**
 * Memory-managed `free` function
 *
 * @params ptr = pointer to the block of memory to be freed
 * 
 */
void xfree(void* ptr)
{
  //ptr_t *node = root;

  if(NULL == ptr)
  {
    fprintf(stderr,"XFREE ERROR: cannot free a NULL pointer\n");
    exit(EX_DATAERR);
  }

  if(true == deallocate(ptr))
    free(ptr);
}


/*===========================================================================*/
/* Private XMALLOC Functions                                                 */
/*===========================================================================*/

/**
 * adds a pointer to the linked list
 *
 * @params ptr  = pointer to be added
 * @params size = number of bytes that belong to ptr 
 * @returns true if successful, false otherwise
 * 
 */
static void allocate(void* ptr, int size)
{
  ptr_t *node;
  bool nodeExists = false;
  //if root hasn't been initialized, do so
  if(false == initialized)
    initRootNode();

  //traverse to the end of the list
  node = root;
  while(NULL != node->next)
  {
    node = node->next;

    if(ptr == node->ptr && node->allocated == false)
    {
      nodeExists = true;
      break;
    }
    else if(ptr == node->ptr && node->allocated == true)
    {
      fprintf(stderr, "XMALLOC ERROR: pointer %p is already allocated\n", ptr);
      exit(EX_UNAVAILABLE);
    }
  }

  if(nodeExists != true)
  {
    //add new node to end of list
    node->next = malloc(sizeof(ptr_t));
    if(NULL == node->next)
    {
      fprintf(stderr, "XMALLOC ERROR: insufficient memory to index pointer\n");
      exit(EX_UNAVAILABLE);
    }

    node = node->next;
  }

  node->ptr = ptr;
  node->bytes = size;
  node->allocated = true;
  node->next = NULL;
}

/**
 * Initializes the root node of the linked list
 *
 */
static void initRootNode()
{
  root = malloc(sizeof(ptr_t));
  if(NULL == root)
  {
    fprintf(stderr, "XMALLOC ERROR: insufficient memory to initiate"
                    "xmalloc\n");
    exit(EX_UNAVAILABLE);
  }

  initialized = true;
  initNode(root);
  root->ptr = NULL;    //we're not using the root, so this is fine
  root->allocated = true;
  atexit(terminate); //run at exit to check for leaks
}

/*
 * Sets default values for the passed node
 * 
 * @param *node = pointer to the node to be setup
 *         
 *
 */
static inline void initNode(ptr_t *node)
{
  node->bytes = 0;
  node->allocated = false;
  node->next = NULL;
}

/*===========================================================================*/
/* Private XFREE Functions                                                   */
/*===========================================================================*/

/**
 * adds a pointer to the linked list
 *
 * @params ptr = pointer to be deallocated
 * @returns true if successful, false otherwise
 * 
 */
static bool deallocate(void* ptr)
{
  ptr_t *node = root;

  while(node->ptr != ptr && NULL != node->next)
    node = node->next;

  //if ptr is still not equal, then it doesn't exist in the list
  if(NULL == node->next && node->ptr != ptr)
  {
    fprintf(stderr,"XFREE ERROR: pointer %p has not been allocated and cannot "
                   "be freed\n", ptr);
    return false;
  }
  else if(node->allocated == false)
  {
     fprintf(stderr,"XFREE WARNING: pointer %p has already been freed\n", ptr);
     return false;
  }

  node->allocated = false;
  node->bytes = 0;
  return true;
}

/*===========================================================================*/
/* Private Termination Functions                                             */
/*===========================================================================*/

/**
 * Used to run processes upon termination 
 * 
 */
static void terminate(void)
{
  checkLeaks();
  freeList();
}

/**
 * Warns for memory leaks 
 * 
 */
static void checkLeaks(void)
{
  ptr_t *node = root;
  while(NULL != node->next)
  {
    node = node->next; //fisrt one is root, we don't want that
    if(node->allocated == true)
      fprintf(stderr, "XFREE WARNING: memory leak at address %p\n", node->ptr);
  }
}

/**
 * Free()'s the linked list
 * 
 */
 static void freeList(void)
  {
    ptr_t *node = root;
    ptr_t *tempNode;

    while(NULL != node)
    {
      tempNode = node;
      node = node->next;
      free(tempNode);
    }
    root = NULL;
  }
