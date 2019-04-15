/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2019 08:58:05 PM
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
#include <vector>
#include "ItemToPurchase.h"


class ShoppingCart //name
{
    private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;



    public:

        //initiators
        ShoppingCart(string customerName, string currentDate); 
        ShoppingCart();
        ~ShoppingCart();
        
        //mutators
       void AddItem(ItemToPurchase newItem);
       void RemoveItem(string item);
       void ModifyItem(string item);



        //accessors
        void SetName(string name);
        string GetCustomerName()const;
        string GetDate()const;
        vector<ItemToPurchase> GetVector() const;
        void SetDate(string date);
        int GetNumItemsInCart()const;//const vector<ItemToPurchase>& cart);
        int  GetCostOfCart()const;//const vector<ItemToPurchase>& cart);
        void PrintTotal()const;
        void PrintDescriptions()const;
        void PrintItemTotal(ItemToPurchase item)const;
        bool checkduplicate(string name)const;
       


};

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

