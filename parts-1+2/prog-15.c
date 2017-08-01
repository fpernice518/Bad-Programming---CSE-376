/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-15                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-15.c                            ***/
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
  printf("==              BEGIN PROG-15                    ==\n");
  printf("===================================================\n\n");

  int i = 1;               //integer 1
  float f = 1.0;           //floating point 1
  int* intPtr = &i;        //pointer to int 1
  int* fltPtr = (int*)&f;  //pointer to float 1 (cast tricks compiler)

  //see what happens with pointer comparison
  printf("Pointer comparison: ");
  if(*intPtr == *fltPtr)
    printf("%d equals %d\n",*intPtr, *fltPtr);
  else
    printf("%d does not equal %d\n",*intPtr, *fltPtr);

  //now see what happens with direct comparison
  printf("Literal comparison: ");
  if(i == f)
    printf("%d equals %f\n",i, f);
  else
    printf("%d does not equal %f\n",i, f);

  return 0;
}
