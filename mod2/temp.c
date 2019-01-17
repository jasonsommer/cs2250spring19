/*
 * =====================================================================================
 *
 *       Filename:  temp.c
 *
 *    Description:  go from C to F.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:28:49 AM
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
    double temp = 7.9; //Celsius
    // For float use the %f placeholder
    printf("The temperature is %lf Celsius\n", temp);
    printf("What is the temperature in Ogen now: \n");
    scanf("%lf", &temp);
    printf("I see, your temp is %lf in F.\n", (temp*9/5)+32);


    return 0;
}
// Function Definitions


