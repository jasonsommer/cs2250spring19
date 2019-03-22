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
    ItemToPurchase temp;
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
        *cart=AddItem(temp, *cart);
    }
    else if(userInput=='r')//remove item from cart
    {
        char toremove[50]="-";
        printf("REMOVE ITEM FROM CART\n");
        printf("Enter name of item to remove:\n");
        scanf("%[^\n]", toremove);
        RemoveItem(toremove, cart);
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

ShoppingCart AddItem(struct ItemToPurchase item, struct ShoppingCart cart)
{
    //char tempName[50];
    //char tempDesc[2000];
    int tempprice=0;
    int tempquant=0;
    int i=-1;
    int j=0;
    printf("ADD ITEM TO CART\n");
    printf("Enter the item name:\n");
    scanf(" %s", item.itemName);
    fflush(stdin);
    printf("Enter the item description:\n");
    scanf(" %s", item.itemDescription);
    printf("Enter the item price:\n");
    scanf(" %d", &tempprice);
    printf("Enter the item quantity:\n");
    scanf(" %d", &tempquant);
    item.itemPrice=tempprice;
    item.itemQuantity=tempquant;

    while(i==-1)
    {

        
        if(strcmp(cart.cartItems[j].itemName, "none")==0)
        {
            i=i-1;
            j=j-1;
        }
        j++;
    }

    cart.cartItems[j]=item;

    fflush(stdin);
    

    return cart;
}
///////////////////////////////////////////////
ShoppingCart RemoveItem(char itemName[50],struct ShoppingCart * cart )
{
    int i=0;
    int flag=-1;
    while((flag==-1)&&(i!=(MAX-1)))
    {
        if(strcmp(itemName, cart->cartItems[i].itemName)==0)
        {
            MakeItemBlank(&cart->cartItems[i]);
            flag=i;
            
        }
        else
        {
            i++;
        }

    }
        if(flag==-1) 
        {
            printf("Item not found in cart. Nothing removed.\n");
        }
        else if(flag!=-1)
        {
        while(i<MAX-1)   //maybe need to change to just MAX
            {

            cart->cartItems[i]=cart->cartItems[i+1];
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
