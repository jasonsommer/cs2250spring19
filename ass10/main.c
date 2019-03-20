/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 02:25:27 PM
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
#include "ItemToPurchase.h"
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    item first;
    item second;

    printf("Item 1\nEnter the item name:\n");
    fgets(first.itemName,1000, stdin);
    printf("Enter the item price:\n");
    scanf("%d", &first.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &first.itemQuantity);
    getchar();
    
    fflush(stdout);


    printf("\nItem 2\nEnter the item name:\n");
    fgets(second.itemName,1000, stdin);
    printf("Enter the item price\n");
    scanf("%d", &second.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &second.itemQuantity);

    printf("TOTAL COST\n");

    PrintItemCost(first);
    PrintItemCost(second);
    printf("\nTotal: $%d\n", (first.itemPrice * first.itemQuantity)+(second.itemPrice * second.itemQuantity));



    return 0;
}
// Function Definitions


