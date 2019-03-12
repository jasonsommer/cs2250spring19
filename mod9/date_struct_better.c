/*
 * =====================================================================================
 *
 *       Filename:  date_struct_better.c
 *
 *    Description:  better practice for structures.
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:54:13 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct_better.c -o date_struct_better.out
 *          Usage:  ./date_struct_better.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct Date
{
    int month;
    int day;
    int year;
}Date;

// Function Prototypes
// best to define structure before ever using it.
void Hello_Date(Date d1);


// Main Function
int main(int argc, char* argv[])
{
    Date d1;
    d1.month = 12;
    d1.day = 23;
    d1.year = 2018;

    printf("%d/%d/%d\n", d1.day,d1.month,d1.year);
    Hello_Date(d1);
    return 0;
}
// Function Definitions
// param: Date d1. Param passed by value
void Hello_Date(Date d1)
{
   
    printf("%d/%d/%d\n", d1.day,d1.month,d1.year);
    return;
}
