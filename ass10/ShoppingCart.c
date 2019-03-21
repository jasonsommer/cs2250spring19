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
void PrintTotal(struct ShoppingCart cart)
{

}
///////////////////////////////////////////////////
void PrintDescriptions()
{
    return;
}
//////////////////////////////////////////////////////
void PrintMenu()
{
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
void GetNumItemsInCart()
{
    return;
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

