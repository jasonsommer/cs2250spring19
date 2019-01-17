/*
 * =====================================================================================
 *
 *       Filename:  balldrop.c
 *
 *    Description:  ball drop
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:19:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double GRAVITY = 9.8;
const double BUILDING = 500; //METERS
// Function Prototypes

// Main Function
int main()
{

    double time =0;
    double distance =0;
    printf("Enter time in seconds: ");
    scanf("%lf", &time);
    distance = 0.5 * GRAVITY * pow(time, 2);
    printf("After %lf seconds, your ball travelled %f meters\n:",
            time, distance);
    printf("Your ball is %lf meters from the ground.\n", BUILDING-distance);


    return 0;
}
// Function Definitions


