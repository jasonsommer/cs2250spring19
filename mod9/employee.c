/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee struct for record keeping.
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:06 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out
 *          Usage:  ./employee.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;
}Employee;

#define TAXRATE1 0.10 //trump
#define TAXRATE2 0.25 //clinton, but requires your life as well.
#define TAXRATE3 0.75 //sanders

// Function Prototypes
double CalcNet(Employee);  //by pass by
double CalcGross(Employee* emp); //by address
// Main Function
int main(int argc, char* argv[])
{
    Employee waldo = {1, 7.5, 20, 0 };
    waldo.taxRate = TAXRATE1;
    printf("Hi Waldo, your net pay is %.2lf\n", waldo.netPay);
    waldo.grossPay = CalcGross(&waldo);
    return 0;
}
// Function Definitions

double CalcNet(Employee emp) //return net pay
{
    return emp.payRate*emp.hours;

}

double CalcGross(Employee* emp)
{
    //to access structure members when using a pointer
    //use the dereference opperator
    return emp->payRate * emp->hours *(1 - emp->taxRate);
}


