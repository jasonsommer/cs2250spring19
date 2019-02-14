/*
 * =====================================================================================
 *
 *       Filename:  mainArgs.c
 *
 *    Description:  Pass arguments/parameters to main funciton
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:17:54 AM
 *       Revision:  none
 *       Compiler:  gcc mainArgs.c -o mainArgs.out
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
int main(int argc, char* argv[])
{
    printf("Argument count is: %d\n", argc);
    for (int i = 0;  i < argc;i +=1) 
    {
        printf("Argc %d [%s]\n", i, argv[i]);
        
    }
    return 0;
}
// Function Definitions


