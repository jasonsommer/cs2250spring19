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
   ContactNode* person1 = NULL;
    ContactNode* person2 = NULL;
    ContactNode* person3 = NULL;
    int i=1;
    person1= (ContactNode*)malloc(sizeof(ContactNode));
    *person1=CreateContactNode(person1, i);
    i++;
    person2= (ContactNode*)malloc(sizeof(ContactNode));
    *person2=CreateContactNode(person2, i);
    i++;
    person3= (ContactNode*)malloc(sizeof(ContactNode));
    *person3=CreateContactNode(person3, i);

    InsertContactAfter(person1, person2);
    InsertContactAfter(person1, person2);

    printf("CONTACTLIST\n");
    PrintContactNode(person1);
    PrintContactNode(person2);
    PrintContactNode(person3);




    

    return 0;
}
// Function Definitions


