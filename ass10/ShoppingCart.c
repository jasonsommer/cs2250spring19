/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2019 08:06:32 PM
 *       Revision:  none
 *       Compiler:  gcc ShoppingCart.c -o ShoppingCart.out
 *          Usage:  ./ShoppingCart.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
// Function Definitions
void PrintTotal(struct ShoppingCart* cart)
{

}
///////////////////////////////////////////////////
void PrintDescriptions(const ShoppingCart *cart)
{
    printf("%s's Shopping Cart - %s\n\n", cart->customerName, cart->currentDate);
    printf("Item Descriptions\n");
    int i=0;
    char key[6]= "empty";
    while(strcmp(cart->cartItems[i].itemName,key)!=0)
    {
        printf("%s: %s\n", cart->cartItems[i].itemName, cart->cartItems[i].itemDescription);

    i++;
    }
    return;
}
//////////////////////////////////////////////////////
void PrintMenu(struct ShoppingCart *cart)
{
    char userInput='-';
    printf("MENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output Shopping cart\n");
    printf("q - Quit\n\n");
    while(1)///////////////update when done with remaining functions
    {
    printf("Choose an option:\n");
    scanf("%c", &userInput);
    if(userInput=='a')
    {
        AddItem();
    }
    else if(userInput=='r')
    {
        RemoveItem();
    }
    else if(userInput=='c')
    {
        ModifyItem();
    }
    else if(userInput=='i')
    {
     PrintDescriptions(cart);
     }
    else if (userInput=='o')
    {
        printf("OUTPUT SHOPPING CART\n");
        PrintTotal(cart);
    }
    else if(userInput=='q')
    {
        break;
    }
    

    }
    return;
}
//////////////////////////////////////////
void AddItem()
{
    return;
}
///////////////////////////////////////////////
void RemoveItem()
{
    return;
}

void ModifyItem()
{
    return;
}
int GetNumItemsInCart(struct ShoppingCart cart)
{
 int total=0;
 for(int i=0; i<MAX; i++)
 {
     int tempquant=0;
     tempquant=cart.cartItems[i].itemQuantity;
     total=total+tempquant;

 }

    return total;
}
int GetCostOfCart(struct ShoppingCart cart)
{
 int total=0;
 for(int i=0; i<MAX; i++)
 {
     int tempprice=0;
     int tempquant=0;
     tempprice=cart.cartItems[i].itemPrice;
     tempquant=cart.cartItems[i].itemQuantity;
     total=total+tempprice*tempquant;

 }
 return total;
}

