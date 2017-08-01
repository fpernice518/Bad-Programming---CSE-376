/*****************************************************************************/
/*****************************************************************************/
/***                    Program     : prog-12                              ***/
/***                    Class       : CSE 376 Homework 2                   ***/
/***                    File        : prog-12.c                            ***/
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
  printf("==              BEGIN PROG-12                    ==\n");
  printf("===================================================\n\n");

  char selection;
  char *ptr;

  printf("Type 'n' for small negative number or 'p' for small "
         "positive number: ");

  selection = getchar(); //get input from user to select negative or positive

  switch(selection)
  {
    case 'n':
      ptr = (char *) -1;  //cast to a pointer to squelch warnings
      break;
    case 'p':
      ptr = (char *) 1;
      break;
    default:
      printf("invalid selection...exiting\n");
      exit(-1);
  }
    

  printf("assigning values to %p pointer...\n", ptr);
  ptr[0] = 'a';
  ptr[1] = 'z';

  printf("address: %p data: %c %c\n", ptr, ptr[0], ptr[1]);


  return 0;
}
