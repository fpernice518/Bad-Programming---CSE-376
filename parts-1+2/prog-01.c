/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-01                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-01.c                            ***/
/***                    Author      : Frank Pernice                        ***/
/***                    Student ID  : 107656300                            ***/
/***                    Version     : 1.0                                  ***/
/***                    Date        : 10 October 2014                      ***/
/*****************************************************************************/
/*****************************************************************************/

/*===========================================================================*/
/* Headers                                                                   */
/*===========================================================================*/
#include <stdio.h>

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char* argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN PROG-01                    ==\n");
  printf("===================================================\n\n");

  //declare static character array
  static char someString[] = "To be or not to be...that is a boolean"; 
  //FYI: since 1 | !1 === 1, the answer to the question is TO BE

  int length = sizeof(someString)/sizeof(someString[0]);
    int i;

  printf("String Length = %d\n", length);

  for(i = 0; i <= (length + 500); ++i) //overflow it by going to length+500
    putchar(someString[i]);            //print each character individually

  putchar('\n');
  return 0;
}
