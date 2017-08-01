/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : dbl-free                             ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : dbl-free.c                           ***/
/***                    Author      : Frank Pernice                        ***/
/***                    Student ID  : 107656300                            ***/
/***                    Version     : 1.0                                  ***/
/***                    Date        : 23 October 2014                      ***/
/*****************************************************************************/
/*****************************************************************************/

/*===========================================================================*/
/* Headers                                                                   */
/*===========================================================================*/
#include <stdlib.h>
#include <stdio.h>
#include "xmalloc.h"

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char const *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN DOUBLE-FREE                ==\n");
  printf("===================================================\n\n");

  printf("allocating ptr 1...\n");
  char *ptr1 = xmalloc(10);
  printf("allocating ptr 2...\n");
  char *ptr2 = xmalloc(10);
  printf("allocating ptr 3...\n");
  char *ptr3 = xmalloc(10);
  printf("done allocating ptrs\n");

  *ptr3 = 5;
  printf("freeing ptr1...\n");
  xfree(ptr1); 
  printf("freeing ptr2...\n");     
  xfree(ptr2); 
  printf("freeing ptr3...\n");
  xfree(ptr3);                  
  printf("done freeing pointers\n");

  printf("freeing ptr1 again...\n");
  xfree(ptr1);
  printf("freeing ptr2 again...\n");
  xfree(ptr2);
  printf("skipping ptr3...\n");
  printf("done freeing\n");

  return 0;
}
