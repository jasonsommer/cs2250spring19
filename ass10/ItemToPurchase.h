/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 02:25:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__


    
typedef struct ItemToPurchase
{
char itemName[60];
int itemPrice;
int itemQuantity;
int itemNumber;
char itemDescription[2000];
}ItemToPurchase;

void PrintItemCost(const ItemToPurchase item);
void MakeItemBlank(struct ItemToPurchase* item);
ItemToPurchase scanItem();



#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

