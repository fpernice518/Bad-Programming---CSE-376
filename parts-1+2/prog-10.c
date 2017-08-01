/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-10                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-10.c                            ***/
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
  printf("==              BEGIN PROG-10                    ==\n");
  printf("===================================================\n\n");

  printf("allocating ptr...\n");
  char *ptr = malloc(10);
  printf("done allocating ptr\n");

  ptr[0] = 'a';
  ptr[1] = 'z';

  printf("before: %c%c\n", ptr[0], ptr[1]);

  printf("freeing ptr...\n");
  free(ptr);                     
  printf("done freeing\n");

  printf("after: %c %c\n", ptr[0], ptr[1]);

  return 0;
}