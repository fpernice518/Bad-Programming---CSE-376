/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-06                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-06.c                            ***/
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

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char const *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN PROG-06                    ==\n");
  printf("===================================================\n\n");

  char *ptr = malloc(8);

  printf("Address of ptr before NULL = %p\n", ptr);
  ptr = NULL;
  printf("Address of ptr before NULL = %p\n", ptr);
  
  printf("freeing ptr...\n");
  free(ptr);
  printf("done freeing\n");

  printf("Address of ptr after free = %p\n", ptr);

  return 0;
}
