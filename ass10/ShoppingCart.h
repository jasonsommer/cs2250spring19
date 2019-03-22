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
#include <string.h>
#include "ItemToPurchase.h"
//#include <string.h>
#define MAX 10

typedef struct ShoppingCart
{
    char customerName[100];
    char currentDate[100];
    int cartSize;
    struct ItemToPurchase cartItems[100];
}ShoppingCart;
void PrintTotal(const ShoppingCart cart);
///////////////////////////////////////////////////
//////////////////////////////////////////////////////
void PrintDescriptions(const ShoppingCart *cart);
void PrintMenu(struct ShoppingCart cart);
//////////////////////////////////////////
ShoppingCart AddItem(struct ItemToPurchase item, struct ShoppingCart older);
/////////////////////////////////////////////

ShoppingCart RemoveItem(char itemName[50],struct ShoppingCart * cart );
void ModifyItem();
int GetNumItemsInCart(struct ShoppingCart cart);
int GetCostOfCart(struct ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

