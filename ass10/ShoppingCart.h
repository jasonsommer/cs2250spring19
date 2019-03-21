/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2019 08:06:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART__INC__
#include "ItemToPurchase.c"
#include <string.h>
#define MAX 10

typedef struct ShoppingCart
{
    char customerName[100];
    char currentDate[100];
    int cartSize;
    struct ItemToPurchase cartItems[10];
}ShoppingCart;
void PrintTotal();
///////////////////////////////////////////////////
void PrintDescriptions();
//////////////////////////////////////////////////////
void PrintMenu();
//////////////////////////////////////////
void AddItem();
///////////////////////////////////////////////
void RemoveItem();

void ModifyItem();
void GetNumItemsInCart();
int GetCostOfCart(struct ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

