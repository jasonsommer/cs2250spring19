/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurhase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2019 03:03:36 PM
 *       Revision:  none
 *       Compiler for c:  gcc ItemToPurhase.cpp -o ItemToPurhase.out
 *       Compiler for c++:  g++  ItemToPurhase.cpp -o ItemToPurhase.out
 *          Usage:  ./ItemToPurhase.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>
//#include <stdlib.h>


// For C++ Code
#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

// Constants



// Function Prototypes

// Main Function
ItemToPurchase::ItemToPurchase(string name,int itemPrice, int itemQuantity)
{
SetName(name);
SetPrice(itemPrice);
SetQuantity(itemQuantity);
}
ItemToPurchase::ItemToPurchase()
{
    SetName("none");
    SetPrice(0);
    SetQuantity(0);
}

//destructor
ItemToPurchase::~ItemToPurchase()
{
}

void ItemToPurchase::SetName(string name)
{
    this->itemName=name;
}

void ItemToPurchase::SetPrice(int price)
{
    this->itemPrice=price;
}

void ItemToPurchase::SetQuantity(int quantity)
{
    this->itemQuantity=quantity;
}

string ItemToPurchase::GetName() const
{
    return itemName;
}

int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}
