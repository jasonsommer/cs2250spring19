/*
 *
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  guess the number, with three lives
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
#define MAX 3
#define LIMIT 10
//Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));
    guess = rand()% LIMIT;
    // int i; //before c89 you need to define i outside loop
    for (int i = 0; i < MAX; i++) {
        printf("Please guess a number between 0 and 10\n");
        scanf("%d", &number);
        if(number== guess)
        {
            printf("congrats, you got it\n");
            break;
        } //end of loop
        else if (number> guess)
        {
            printf("guess lower chump\n");
        }
        else if (number< guess)
        {
            printf("guess higher bub\n");
        }

    }
    printf("Sorry, ya done messed up, try again\n");
    return 0;
}
// Function Definitions


