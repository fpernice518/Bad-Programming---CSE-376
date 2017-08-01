/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-14                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-14.c                            ***/
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
#include <string.h>

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN PROG-14                    ==\n");
  printf("===================================================\n\n");

  char i;
  char *ones;
  char *twos;
  char *ref;
  char *ptr1;
  char *ptr2;

  ref = (char *) malloc(20); //reference pointer
  ones = (char *)malloc(10); //array of 10 1's
  twos = (char *)malloc(10); //array of 10 2's
  memset(ones,1,10); //fill with 1's
  memset(twos,2,10); //fill with 2's

  ptr1 = ref;       //set ptr1 to the reference
  ptr2 = ptr1 + 5;  //set ptr2 to pt1 offset by 5

  memcpy(ptr1,ones,10); //copy 1's to ptr1
  memcpy(ptr2,twos,10); //copy 2's to ptr2

  //print out contents
  printf("Mem Contents:"); 
  for(i = 0; i < 20; ++i)
    printf("%d, ", (int)ptr1[(int)i]);
  printf("\n");

  return 0;
}
