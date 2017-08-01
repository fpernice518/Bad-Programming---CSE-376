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
#include <string.h>

//gets first frame (after main)
int* foo(int i)
{
  int j = i;
  int *ptr = &j;
  ++(*ptr);
  return ptr;  //return a pointer to automatic variable j
}

//gets second frame (after main)
int* bar(int i)
{
  int j = i;
  int *ptr = &j;
  *ptr = *ptr + 5;
  return ptr;  //return a pointer to automatic variable j
}

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN PROG-21                    ==\n");
  printf("===================================================\n\n");

  int *ptr1 = foo(2);      //get pointer from foo
  int *ptr2 = bar(*ptr1);  //call bar with that pointer
  printf("Pointer 1 Address: %p   Value: %d\n", ptr1, *ptr1);
  printf("Pointer 2 Address: %p   Value: %d\n", ptr2, *ptr2);
  return 0;
}
