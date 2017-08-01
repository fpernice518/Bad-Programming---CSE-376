/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : xmalloc                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : xmalloc.h                            ***/
/***                    Author      : Frank Pernice                        ***/
/***                    Student ID  : 107656300                            ***/
/***                    Version     : 1.0                                  ***/
/***                    Date        : 19 October 2014                      ***/
/*****************************************************************************/
/*****************************************************************************/

#ifndef XMALLOC_H
#define XMALLOC_H

/*===========================================================================*/
/* Headers                                                                   */
/*===========================================================================*/
#include <stdio.h>
#include <sys/types.h>

/*===========================================================================*/
/* Function Prototypes                                                       */
/*===========================================================================*/

/**
 * Memory-managed `malloc` function
 *
 * @params size = number of bytes to be allocated
 *
 */
void* xmalloc(size_t size);

/**
 * Memory-managed `free` function
 *
 * @params ptr = pointer to the block of memory to be freed
 * 
 */
void  xfree(void* ptr);


#endif /* XMALLOC_H */
