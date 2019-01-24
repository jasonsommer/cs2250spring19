/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  learn to use stringy dingies.
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:30 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o ropes.out
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
    // A string is  alist or colletions of characters (array);
    char fName[50]; // the last character is taken by the null character;
                    // strings use the %s as the placeholder
    printf("Please enter your name: ");
    scanf("%s", fName);  // when using arrays, do not include the address operator
                        // in your scanf.
    printf("Hi [%s]\n", fName);

    return 0;
}
// Function Definitions


