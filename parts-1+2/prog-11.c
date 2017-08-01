/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-11                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-11.c                            ***/
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
  printf("==              BEGIN PROG-11                    ==\n");
  printf("===================================================\n\n");

  char *ptr = 0;

  printf("assigning values to zero pointer...\n");
  ptr[0] = 'a';
  ptr[1] = 'z';

  printf("address: %p data: %c %c\n", ptr, ptr[0], ptr[1]);

  return 0;
}