/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  A formula to calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:25 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
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
    //bmi is equal to weight(pounds) over height squared(in)
    //1. user inputs of weight and height.
    //2. calculate
    //3. print
double weightYours = 0;
double heightYours = 0;

printf("Enter your weight in pounds:\n ");
scanf("%lf", &weightYours);
printf("Enter your height in inches:\n ");
scanf("%lf", &heightYours);

printf("\nYour BMI is:\n%lf lbs/in^2\n\n",weightYours/(heightYours*heightYours));
    return 0;
}
// Function Definitions


