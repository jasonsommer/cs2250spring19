/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Authoring assistant to make my life heck.
 *
 *        Version:  1.0
 *        Created:  03/12/2019 05:45:56 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out
 *          Usage:  ./main.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int STRLEN = 1000; //may need to be increase depending on 
                            //how big the tests are.

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{

    char userInput[STRLEN];
    printf("Enter a sample text:\n");
    fgets(userInput, STRLEN, stdin);
    printf("\n\n%s\n", userInput);

    return 0;
}
// Function Definitions


