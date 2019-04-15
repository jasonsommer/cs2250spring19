/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2019 08:58:06 PM
 *       Revision:  none
 *       Compiler for c:  gcc ShoppingCart.cpp -o ShoppingCart.out
 *       Compiler for c++:  g++  ShoppingCart.cpp -o ShoppingCart.out
 *          Usage:  ./ShoppingCart.out
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
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

        //initiators
ShoppingCart::ShoppingCart(string customerName, string currentDate)
{
    SetName(customerName);
    SetDate(currentDate);
}

//////////////////////////////////////////////////////////////////////////////
ShoppingCart::ShoppingCart()
{
    SetName("none");
    SetDate("January 1, 2016");


}
//////////////////////////////////////////////////////////////////////////////
ShoppingCart::~ShoppingCart()
{
}
//////////////////////////////////////////////////////////////////////////////
        
        //mutators
        
void ShoppingCart::SetName(string name)
{
    this->customerName=name;
}
string ShoppingCart::GetCustomerName() const
{
    return customerName;
}
//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::SetDate(string date)
{
    this->currentDate=date;
}
string ShoppingCart::GetDate() const
{
    return currentDate;
}
vector<ItemToPurchase> ShoppingCart::GetVector() const
{
    return cartItems;
}
//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::AddItem(ItemToPurchase newItem)
{
        cartItems.push_back(newItem);

}
//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::RemoveItem(string item)
{
    int flag=-1;
    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        //PrintItemTotal(cartItems.at(i));
        if(cartItems.at(i).GetName()==item)
        {
           cartItems.erase(cartItems.begin( )+i);
           flag++;
        }
    }
        if(flag==-1)
        {
            cout<< "Item not found in cart. Nothing removed." << endl;
        }


}
bool ShoppingCart::checkduplicate(string name)const
{
    
return 0;
}

//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::ModifyItem(string item)
{
    int newVal = 0;
    int flag = 1;
    cout<< "Enter the new quantity:" << endl;
    cin >> newVal;

    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        //PrintItemTotal(cartItems.at(i));
        if(cartItems.at(i).GetName()==item)
        {
           //flag++;
           cartItems.at(i).SetQuantity(newVal);
           //flag++;
        }
    }
    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        //PrintItemTotal(cartItems.at(i));
        if(cartItems.at(i).GetName()==item)
        {
           flag++;
           //cartItems.at(i).SetQuantity(newVal);
           //flag++;
        }
    }
    if(flag==1)
    {
        cout << "Item not found in cart. Nothing modified." << endl << endl;
    }

}
//////////////////////////////////////////////////////////////////////////////


        //accessors
int ShoppingCart::GetNumItemsInCart()const//const vector<ItemToPurchase>& cart)
{
    unsigned int totalCost = 0;
    for(ItemToPurchase ItemToPurchase : cartItems)
    {
        totalCost=totalCost+ItemToPurchase.GetQuantity();
    }
    return totalCost;
 }
//////////////////////////////////////////////////////////////////////////////
int ShoppingCart::GetCostOfCart()const //const vector<ItemToPurchase>& cart)
{
    unsigned int totalCost = 0;
    for(ItemToPurchase ItemToPurchase : cartItems)
    {
        totalCost=totalCost+(ItemToPurchase.GetPrice()*ItemToPurchase.GetQuantity());
    }
    return totalCost;
}
//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::PrintTotal()const
{
    cout << GetCustomerName() <<"'s Shopping Cart - " << GetDate() << endl
         << "Number of Items: " << GetNumItemsInCart() << endl << endl;   //TODO change back to call the function
    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        PrintItemTotal(cartItems.at(i));
    }
    if(GetNumItemsInCart()==0)
    {
        cout<< "SHOPPING CART IS EMPTY" << endl;
    }
    cout << endl << "Total: $" << GetCostOfCart() << endl<< endl;
}
//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::PrintDescriptions()const
{
    cout << GetCustomerName() <<"'s Shopping Cart - " << GetDate() << endl<< endl
        << "Item Descriptions" << endl;

    for(unsigned int i = 0; i < cartItems.size(); i++)
    {
        cout << cartItems.at(i).GetName() << ": " << cartItems.at(i).GetDescription() << endl;
    }
    cout << endl;
}
//////////////////////////////////////////////////////////////////////////////
void ShoppingCart::PrintItemTotal(ItemToPurchase item)const
{
 cout << item.GetName() << " " << item.GetQuantity() << " @ $" << item.GetPrice() 
     << " = $" << item.GetQuantity()*item.GetPrice() << endl;

}
