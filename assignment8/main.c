/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Authoring assistant to make my life heck.
 *
 *        Version:  1.0
 *        Created:  03/12/2019 05:45:56 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out
 *          Usage:  ./main.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int STRLEN = 1000; //may need to be increase depending on 
                            //how big the tests are.

// Constants

// Function Prototypes
char PrintMenu();
void Menu();
// Main Function
int main(int argc, char* argv[])
{

    char userInput[STRLEN];
    printf("Enter a sample text:\n");
    fgets(userInput, STRLEN, stdin);
    printf("\nYou entered: %s", userInput);

    return 0;
}
// Function Definitions
//
void Menu()
{
    printf("MENU\nc - Number of non-whitespace characters\n");
    printf("w - Number of words\nf - Fix capitalizaton\n");
    printf("r - Replace all !'s\ns - Shorten spaces\nq - Quit\n\n");
    printf("Choose an option:");
    PrintMenu();
    
    return;
}

char PrintMenu()
{
    char userChoice;
    int temp=0;
    Menu();
    while(temp==0)
    {
    scanf("%c", &userChoice);
    if((userChoice=='c')||(userChoice=='w')||(userChoice=='f')||(userChoice=='r')||(userChoice=='s')||(userChoice=='q'))
    {
        temp++;
    }
    }
    
return userChoice;

}


