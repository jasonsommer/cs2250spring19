/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:37:16 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out
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
    int inputNum = 0;
    int inputNum2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &inputNum,&inputNum2);
    //test value for even or odd
    if(inputNum % 2 == 0)
    {
        if(inputNum2 % 2 == 0)
        {
            printf("Both numbers are even.\n");
        }
        else
        {
            printf("The first number is even, but not the second number\n");
        }

    }
    else
    {
        if(inputNum2 % 2 == 0)
        {
            printf("The first number is odd, but the second is even\n");
        }
        else
        {
            printf("Both numbers are odd\n");
        }
    }
    
    return 0;
}
                        // Function Definitions


