/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-17                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-17.c                            ***/
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
int main(int argc, char *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN PROG-17                    ==\n");
  printf("===================================================\n\n");
 
  int i;               //uninitialized variable
  int *ptr = &i;       //try to get address
  printf("%i\n",*ptr);
  return 0;
}