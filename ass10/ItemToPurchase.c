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
    strcpy(item->itemName, "none");

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
