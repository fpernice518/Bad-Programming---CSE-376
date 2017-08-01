/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-07                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-07.c                            ***/
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
  printf("==              BEGIN PROG-07                    ==\n");
  printf("===================================================\n\n");

  char *ptr = "Some non-heap string...";

  printf("%s\n", ptr);
  
  printf("freeing ptr...\n");
  free(ptr);                     //fails here
  printf("done freeing\n");

  printf("%s\n", ptr);

  return 0;
}
