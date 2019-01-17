/*
 * =====================================================================================
 *
 *       Filename:  satellite.c
 *
 *    Description:  Calculate altitude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:42 AM
 *       Revision:  none
 *       Compiler:  gcc satellite.c -o satellite.out -lm
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double G = 9.8; //newtons constant M^3/(kg s^2)
const double PI = 3.1415941;
const double EARTH = 5.97e24; //Earth's mass
const double RADIUS = 6.371e6; //

// Function Prototypes

// Main Function
int main()
{

    double time = 0;
    double height1 = 0;
    double height = 0;
  //Height= [(G M T^2)/(4PI^2)]^1/3 -R
    //1. enter the period
    //2. calculate height
    //3. display result.
printf("What is the period in Seonds: ");
scanf("%lf", &time);
height1 = ((G * EARTH * time * time)/(4*PI*PI));
height = pow(height1, 1/3)-RADIUS;
printf("The heigh in meters above the earth is %lf.\n", height);
    
    
    return 0;
}
// Function Definitions


