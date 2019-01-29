/*
 * =====================================================================================
 *
 *       Filename:  cartisian.c
 *
 *    Description:  calculate stuff witht he cartisian plan and radius and theta.
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:39:42 AM
 *       Revision:  none
 *       Compiler:  gcc cartisian.c -o cartisian.out -lm
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
double radius = 0;
double theta = 0;
double radians = 0.0;
double pi = 3.14159;
double xCoor = 0;
double yCoor = 0;

//capture user input for the radius and theta;
//convert theta to radians;
//calculate the coordinates off of the information;
//print the results, in two decimal places.
    printf("What is the radius of your line?");
    scanf("%lf", &radius);
    printf("What is the theta of your line?(in degrees) ");
    scanf("%lf", &theta);

radians = theta*((2.0*pi)/360.0);
xCoor = cos(radians)*radius;
yCoor = sin(radians)*radius;

printf("(%.2lf, %.2lf)\n", xCoor, yCoor);



    return 0;
}
// Function Definitions


