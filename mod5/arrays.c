/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:05:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
//
#define NUM 3

// Function Prototypes

// Main Function
int main()
{
    int grades[NUM]; //array of size NUM 
    
    for (int i = 0; i < NUM; i++) 
    {
        printf("Enter a number: ");
        scanf("%d", &grades[i]);  //do not use the address operateor
    }

    for (int i = 0; i < NUM; i++) 
    {
        printf("%d number is [%d]\n", i+1, grades[i]);
    }


    return 0;
}
// Function Definitions


