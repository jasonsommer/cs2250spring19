/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  more characters and fixtures
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:04:53 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2.out
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
    char c = '0';

    printf("C is %c\n", c);
    printf("C is %d\n", c);  //using decimal to identifiy. 
    printf("C is %x\n", c);  //using hexadecimal to identify.

    printf("Enter the first letter of your first name: \n");
    scanf("%c", &c);
    printf("Your initial is [%c]\n", c);
    return 0;
}
// Function Definitions


