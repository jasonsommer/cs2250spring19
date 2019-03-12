/*
 * =====================================================================================
 *
 *       Filename:  assignment8.c
 *
 *    Description:  count the number of non spaces in a string.
 *
 *        Version:  1.0
 *        Created:  03/11/2019 10:44:47 AM
 *       Revision:  none
 *       Compiler:  gcc assignment8.c -o assignment8.out
 *          Usage:  ./assignment8.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GetNumOfCharacters(char userInput[]);
void RmvSpace(char userInput[]);
//int str_len=50;
// Constants
const int str_len = 1000;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    char User_String[str_len];
    printf("Enter a sentence or phrase: \n");
    fgets(User_String, str_len, stdin);
    User_String[strlen(User_String)-1]='\0';
    printf("\nYou entered: %s\n\n", User_String);

    GetNumOfCharacters(User_String);
    RmvSpace(User_String);

    return 0;
}
// Function Definitions
void GetNumOfCharacters(char userInput[])
{
    int numChar = 0;
   for(int i=0; i<strlen(userInput); i++)
   {
       if(userInput[i]!=' ')
       {
           numChar++;
       }
   }
 printf("Number of Characters: %d\n", numChar);
return;
}

void RmvSpace(char userInput[])
{
char newStr[str_len];
int j=0;

for(int i=0; i<strlen(userInput); i++)
{
    if(userInput[i]!=' ')
    {
        newStr[j]=userInput[i];
        j++;
    }
}
printf("String with no whitespaces: %s\n", newStr);
    return;
}
