/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 08:36:35 AM
 *       Revision:  none
 *       Compiler:  gcc pointers.c -o pointers.c.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void PrintValues(int num, int* p_num);
// Main Function
int main(int argc, char* argv[])
{
    int i = 7;
   int* pi = &i; //it ccan store address of integer variables.
/*
    printf("Value of i=[%d] address of i=[%p]\n", i, &i);
    printf("Value of pi=[%p] address of pi=[%p]\n", pi, &pi);
    printf("Value at the address of pi=[%d]\n",*pi);
    //Modify i
*/

   PrintValues(i, &i);
    i *= 2;
   PrintValues(i, pi);

   //Change value via the pointer
   *pi = 99;
   PrintValues(i, pi);
    return 0;
}
// Function Definitions



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintValues
 *  Description:  print the values of an integer and a pointer to integer
 *  parm: num : integer
 *  Param: p_num: pointer to integer
 * =====================================================================================
 */
void PrintValues(int num, int* p_num)
{
    printf("Value of i=[%d} and pi=[%d]]\n", num, *p_num);

    return;
}
