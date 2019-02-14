/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 08:38:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

// Constants
#define PERSONS 5
#define ATTRI 3
#define AGE 0
#define WEIGHT 1
#define HEIGHT 2
// Function Prototypes

// Main Function
int main()
{

    double people[PERSONS][ATTRI];
    srand(time(0));   /* 2D array*/

    for(int i = 0; i < PERSONS; i++) /* loop over Persons 1D */
    {
        for(int j= 0; j<ATTRI; j++) /* loop over attributes 2D*/
        {
            if(j ==AGE)
            {
                people[i][j] = rand() %50;
            }
            else if(j == WEIGHT)
            {
                people[i][j] = rand() %200;
            }
            else if(j ==HEIGHT)
            {
                people[i][j] = rand() % 200;
            }
        }
        }
    for (int row = 0; row <PERSONS ; row++)
    {

        printf("%d person information\n", row +1);
        for (int col= 0; col<ATTRI; col++ )
        {


            switch (col) 
            {
                case AGE:
                    printf("Your age is %6.0lf\n", people[row][col]);
                    break;
                case WEIGHT:
                    printf("\tYour weight is %6.2lf\n", people[row][col]);
                    break;
                case HEIGHT:
                    printf("\tYour height is %6.2lf\n", people[row][col]);
                    break;
            }         /* end of switch */


        } // end of col loop
    printf("end of attributes\n");

    } // end of row loop
    printf("end of people\n\n");
    return 0;
}
// Function Definitions


