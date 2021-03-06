/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-08                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-08.c                            ***/
/***                    Author      : Frank Pernice                        ***/
/***                    Student ID  : 107656300                            ***/
/***                    Version     : 1.0                                  ***/
/***                    Date        : 10 October 2014                      ***/
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
  printf("==              BEGIN PROG-08                    ==\n");
  printf("===================================================\n\n");

  printf("allocating ptr...\n");
  char *ptr = XMALLOC(10);
  char *ptr2 = XMALLOC(10);
  char *ptr3 = XMALLOC(10);
  printf("done allocating ptr\n");

  *ptr3 = 5;
  printf("freeing ptr...\n");
  XFREE(ptr);      
  XFREE(ptr2);   
  //xfree(ptr3);                  
  printf("done freeing\n");

  printf("freeing ptr again...\n");
  XFREE(ptr);                     //fails here
  printf("done freeing\n");

  return 0;
}
