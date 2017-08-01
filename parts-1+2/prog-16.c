/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-16                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-16.c                            ***/
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
  printf("==              BEGIN PROG-16                    ==\n");
  printf("===================================================\n\n");

  int j = 2;          //declare some variable to get a staring pointer
  int *ptr = (int *)&j;  //get the address of j
  int i = (int) &j;      //get address of j and use it as an integer
  
  //do math
  i = (int)(((float) i) * 3.14159265359 * 2.71828182845 * 7.11);
  i -= (int)ptr;   //subtract ptr from i

  ptr = (int *)i;  //assign i to ptr

  *ptr = 10;       //give whatever address this is a value of 10

  printf("pointer address = %p", ptr); //try to use it, cross fingers

  return 0;
}
