/*
 * =====================================================================================
 *
 *       Filename:  date_struct.c
 *
 *    Description:  Practice structure usage
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:40:18 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct.c -o date_struct.out
 *          Usage:  ./date_struct.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct Birth    //define the structure
{
    int month;
    int day;
    int year;

};

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    //variable type is: struct Birth, but sub category Waldo.
    struct Birth waldo;
    waldo.month = 12;  //go to Birth/waldo/month
    waldo.day = 24;
    waldo.year = 2018;
    printf("Waldo's month is %d\n", waldo.month);
    printf("Waldo's day is %d\n", waldo.day);
    printf("Waldo's year is %d\n", waldo.year % 100);

    struct Birth weber = {11, 5, 2019};

    printf("Webers birthday: %d/%d/%d\n", weber.day, weber.month, weber.year);

    return 0;
}
// Function Definitions


