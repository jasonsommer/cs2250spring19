/*
 * =====================================================================================
 *
 *       Filename:  scanchars.c
 *
 *    Description:  scan chars
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:42:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
 char cIn;
 printf("Enter a character: ");
 scanf(" %c", &cIn);
 printf("You entered [%c]\n", cIn);

 printf("Enter a character: ");
 scanf(" %c", &cIn);
 printf("You entered [%c]\n", cIn);

    return 0;
}
// Function Definitions


