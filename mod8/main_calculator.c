/*
 * =====================================================================================
 *
 *       Filename:  main_calculator.c
 *
 *    Description:  use the calculator library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:56:14 AM
 *       Revision:  none
 *       Compiler:  gcc main_calculator.c calculator.c -o main_calculator.out
 *          Usage:  ./main_calculator.out  //^^this is where you include custom libraries
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num1=8, num2 = 4;
  printf("The sum of %d + %d = %d\n", num1, num2, Add_Numbers(num1, num2));
  printf("The sum of %d - %d = %d\n", num1, num2, Sub_Numbers(num1, num2));
    return 0;
}
// Function Definitions


