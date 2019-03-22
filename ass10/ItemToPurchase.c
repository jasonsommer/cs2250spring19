/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 02:25:27 PM
 *       Revision:  none
 *       Compiler:  gcc ItemToPurchase.c -o ItemToPurchase.out
 *          Usage:  ./ItemToPurchase.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function

// Function Definitions


void MakeItemBlank(struct ItemToPurchase* item)
{
    strcpy(item->itemName, "none");
    item->itemPrice=0;
    item->itemQuantity=0;
    strcpy(item->itemDescription, "none");

    return;
}

void PrintItemCost(struct ItemToPurchase item)
{
    for(int i=0; item.itemName[i]!='\n'; i++)

    {
        printf("%c", item.itemName[i]);
    }
    printf(" %d @ $%d = $%d\n", item.itemQuantity, item.itemPrice,
                                (item.itemPrice * item.itemQuantity));
    return;
}

ItemToPurchase scanItem()
{
    ItemToPurchase temp;
   printf("ADD ITEM TO CART\n");
   printf("Enter the item name:\n");
   scanf(" %[^\n]", temp.itemName);
   fflush(stdin);
   printf("Enter the item description:\n");
   scanf(" %[^\n]", temp.itemDescription);
   printf("Enter the item price:\n");
   scanf(" %d", &temp.itemPrice);
   printf("Enter the item quantity:\n");
   scanf(" %d", & temp.itemQuantity);
   return temp;
}


