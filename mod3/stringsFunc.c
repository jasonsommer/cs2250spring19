/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:19 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>     // for String manipulations
// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];

    printf("Enter your first and last name: ");
    scanf("%s %s", first, last);
    printf("hi %s %s\n", first, last);
    strcpy(fullName, first);
    printf("Your full name is: %s\n", fullName);
    return 0;
}
// Function Definitions


