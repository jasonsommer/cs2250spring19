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

// Constants

// Function Prototypes

// Main Function
// Function Definitions
void PrintTotal(const ShoppingCart cart)
{
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d", GetNumItemsInCart(cart));
    for(int i=0; i<MAX; i++)
    {
        if(strcmp(cart.cartItems[i].itemName, "none")!=0)
        {
            printf("%s %d @ %d = %d\n", cart.cartItems[i].itemName, cart.cartItems[i].itemQuantity, 
                    cart.cartItems[i].itemPrice, cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity);
        }
    }
    printf("\nTotal: $%d\n", GetCostOfCart(cart));

    return;


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
    printf("\nMENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n\n");
    while(1)///////////////update when done with remaining functions
    {
    printf("Choose an option:\n");
    scanf(" %c", &userInput);
    if(userInput=='a')//add item to the cart
    {
       // AddItem();
    }
    else if(userInput=='r')//remove item from cart
    {
        //RemoveItem();
    }
    else if(userInput=='c')//change item quantity
    {
        ModifyItem();
    }
    else if(userInput=='i')//output items descriptions
    {
     PrintDescriptions(cart);
     }
    else if (userInput=='o')//output shopping cart
    {
        printf("OUTPUT SHOPPING CART\n");
        PrintTotal(*cart);
    }
    else if(userInput=='q')//quit
    {
        break;
    }
    

    }
    return;
}
//////////////////////////////////////////

ShoppingCart AddItem(struct ItemToPurchase *item, struct ShoppingCart *cart)
{
   /* char tempName[50];
    char tempDesc[2000];
    int tempprice=0;
    int tempquant=0;
    */
    int i=0;
    while(strcmp(cart->cartItems[i].itemName, "none")!=0)
    {
        i++;

    }
    cart->cartItems[i]=*item;
    return *cart;
}
///////////////////////////////////////////////
ShoppingCart RemoveItem(char itemName[50],struct ShoppingCart * cart )
{
    int i=0;
    int flag=0;
    while(i<MAX)
    {
        if(strcmp(itemName, cart->cartItems[i].itemName)==0)
        {
            MakeItemBlank(&cart->cartItems[i]);
            flag=i;
            i++;
        }
    }
    return *cart;
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

