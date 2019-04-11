/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2019 03:03:36 PM
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
        
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class ItemToPurchase //name
{
    private:
        string itemName;
        int itemPrice;
        int itemQuantity;


    public:

        //initiators
        ItemToPurchase(string name,int itemPrice, int itemQuantity); 
        ItemToPurchase();
        ~ItemToPurchase();
        
        //mutators
        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quant);




        //accessors
        string GetName()const; 
        int GetPrice()const;
        int GetQuantity()const;

};













#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

