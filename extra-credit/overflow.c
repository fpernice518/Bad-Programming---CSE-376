/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : overflow                             ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : overflow.c                           ***/
/***                    Author      : Frank Pernice                        ***/
/***                    Student ID  : 107656300                            ***/
/***                    Version     : 1.0                                  ***/
/***                    Date        : 24 October 2014                      ***/
/*****************************************************************************/
/*****************************************************************************/

/*===========================================================================*/
/* Headers                                                                   */
/*===========================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char const *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN OVERFLOW                  ==\n");
  printf("===================================================\n\n");

  int i;
  char* str = "I think Microsoft named .Net so it wouldn’t show up in a "
              "Unix directory listing."; //has 81 characters

  char *strcopy = malloc(1024);  //only allocate 40 bytes

  strcpy(strcopy, str); //dynaimically copy the string
  
  for(i = 0; i <= 2000; ++i) //print 85 characters
    putchar(strcopy[i]);
  putchar('\n');

  return 0;
}
