/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 05:55:28 PM
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
#include "contacts.h"
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
   ContactNode* person[3] = {NULL, NULL, NULL};
    //ContactNode* person2 = NULL;
    //ContactNode* person3 = NULL;


    
        for(int i=0; i<=2; i++)
        {

        ContactNode temp;
        printf("Person %d\n", i+1);
        printf("Enter name:\n");
        fgets(temp.contactName, 50, stdin);
        temp.contactName[strlen(temp.contactName)-1]='\0';
        printf("Enter phone number:\n");
        fgets(temp.contactPhoneNum, 50, stdin);
        temp.contactPhoneNum[strlen(temp.contactPhoneNum)-1]='\0';
        printf("You entered: %s, %s\n\n", temp.contactName, temp.contactPhoneNum);
        person[i]=(ContactNode*)malloc(sizeof(ContactNode));
        *person[i]=CreateContactNode(person[i], temp.contactName, temp.contactPhoneNum, NULL);
        
        }
    InsertContactAfter(person[0], person[1]);
    InsertContactAfter(person[1], person[2]);
    
    
    printf("CONTACT LIST\n");
    PrintContactNode(person[0]);
    PrintContactNode(person[1]);
    PrintContactNode(person[2]);





    

    return 0;
}
// Function Definitions


