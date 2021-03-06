/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-04                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-04.c                            ***/
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
#include <stdlib.h>
#include <string.h>

/*===========================================================================*/
/* Main                                                                      */
/*===========================================================================*/
int main(int argc, char const *argv[])
{
  printf("\n===================================================\n");
  printf("==              BEGIN PROG-04                    ==\n");
  printf("===================================================\n\n");

  int i;
  char *str= "Racecar";  
  char *strcopy = malloc(8);          
  
  strcpy(strcopy, str);

  //print out original string
  for(i = 0; i < 7; ++i)  
    putchar(str[i]);
  putchar('\n'); 
     
  //print out backwards string (underflow occurs here), goto -10
  for(i = 7; i >= -10; --i)  
    putchar(strcopy[i]);
  putchar('\n');                  

  return 0;
}
