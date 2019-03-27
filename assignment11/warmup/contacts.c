/*
 * =====================================================================================
 *
 *       Filename:  contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:45:09 AM
 *       Revision:  none
 *       Compiler:  gcc contacts.c -o contacts.out
 *          Usage:  ./contacts.out
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

// Function Definitions

ContactNode CreateContactNode(struct ContactNode* contact, int i)
{
    
        ContactNode temp;
        printf("Person %d\n", i);
        printf("Enter name:\n");
        fgets(temp.contactName, 50, stdin);
        temp.contactName[strlen(temp.contactName)-1]='\0';
        printf("Enter the phone number:\n");
        fgets(temp.contactPhone, 50, stdin);
        temp.contactPhone[strlen(temp.contactPhone)-1]='\0';
        printf("You entered: %s, %s\n\n", temp.contactName, temp.contactPhone);
    
        
        return temp;
}
void InsertContactAfter(ContactNode* contact, ContactNode* nextcontact)
{
    ContactNode* tmpNext =NULL;

    tmpNext = contact->nextNodePtr;
    contact->nextNodePtr = nextcontact;
    nextcontact->nextNodePtr = tmpNext;
    return;
}
ContactNode* GetNextContact(ContactNode* contact)
{
     return contact->nextNodePtr;
}
void PrintContactNode(const ContactNode* contact)
{

    printf("Name: %s\n", contact->contactName); //may need to fix how this handles the new lines
    printf("Phone number: %s\n\n", contact->contactPhone);//same as above

    return;
}

