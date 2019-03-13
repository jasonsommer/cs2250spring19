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
int GetNumOfNonWSCharacters(char userInput[]);
//int getNumOfWords(char userInput[]);
char ReplaceExclamation(char userInput[]);

// Main Function
int main(int argc, char* argv[])
{

    char userInput[STRLEN];
    char choice = 't';
    printf("Enter a sample text:\n");
    fgets(userInput, STRLEN, stdin);
    printf("\nYou entered: %s\n", userInput);

    while(choice!='q')
    {
    Menu();
    choice=PrintMenu();
       if(choice=='c')
       {
           GetNumOfNonWSCharacters(userInput);
       }
       else if(choice=='w')
       {
           //getNumOfWords(userInput);
       }
       else if(choice=='f')
       {

       }
       else if(choice=='r')
       {
           
             for(int i =0; i<strlen(userInput);i++)
    {
        if(userInput[i]=='!')
        {
            userInput[i]='.';
        }
         ReplaceExclamation(userInput);
            
    }

            //  strcpy(userInput, ReplaceExclamation(userInput));
       }
       else if(choice=='s')
       {

       }
    }

    return 0;
}
// Function Definitions
//
///////////////////////////////////////////////////////////////////////
void Menu()
{
    printf("MENU\nc - Number of non-whitespace characters\n");
    printf("w - Number of words\nf - Fix capitalization\n");
    printf("r - Replace all !'s\ns - Shorten spaces\nq - Quit\n\n");
    printf("Choose an option:\n");

    //PrintMenu();
    
    return;
}
////////////////////////////////////////////////////////////////////
char PrintMenu()
{
    //Menu();
    char userChoice;
    int temp=0;
   // Menu();
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
///////////////////////////////////////////////////////////////////
int GetNumOfNonWSCharacters(char userInput[])
{
    int numWS=0;
    for(int i=0; i<(strlen(userInput)-1); i++)
    {
        if(userInput[i]!=' ')
                {
                numWS++;
                }


    }
    printf("Number of non-whitespace characters: %d\n\n", numWS);
    return numWS;
}
//////////////////////////////////////////////////////////////////
/*
int getNumOfWords(char userInput[])
{
     int numWords=0;

     for(int i=0; i<strlen(userInput); i++)
     {
         if(isalpha(userInput[i])&&!(isalpha(userInput[i+1])&&!((userInput[i+1]=='''')&&!(isalpha(userInput[i+2])))))
         {
             numWords++;
         }
     }
printf("Number of words: %d\n\n", numWords);




     return numWords;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////
char ReplaceExclamation(char userInput[])
{
    for(int i =0; i<strlen(userInput);i++)
    {
        if(userInput[i]=='!')
        {
            userInput[i]='.';
        }
            
    }
return userInput[STRLEN];
}
