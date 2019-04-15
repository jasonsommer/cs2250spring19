/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2019 03:03:36 PM
 *       Revision:  none
 *       Compiler for c:  gcc main.cpp -o main.out
 *       Compiler for c++:  g++  main.cpp -o main.out
 *          Usage:  ./main.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>
//include <stdlib.h>

// For C++ Code
#include <iostream>
using namespace std;
#include "ShoppingCart.h"

// Function Definitions
//

void PrintMenu(ShoppingCart userCart);
void PrintOptions();
int main(int argc, char* argv[])
{
    char userInput = '-';
    //ShoppingCart userCart;
    string tempName;
    string tempDate;
    string tempstring;
    string tempdesc;
    int tempquant;
    int tempprice;
    cout<< "Enter customer's name:" << endl;
    getline(cin, tempName);
    cout<< "Enter today's date:" << endl;
    getline(cin, tempDate);
    cout << endl << "Customer name: " << tempName << endl
        << "Today's date: " << tempDate << endl;
    ShoppingCart userCart(tempName, tempDate);
   // cin.ignore();
        PrintOptions();
    while(userInput!='q')
    {
        cout << "Choose an option:" << endl;
        cin >> userInput;
        switch(userInput)
        {
            case 'd':
                cout << "REMOVE ITEM FROM CART" << endl
                    << "Enter name of item to remove:" << endl;
                cin.ignore();
                getline(cin, tempstring);
                userCart.RemoveItem(tempstring);
               // cin.ignore();
                break;
            case 'a':
                cout << "ADD ITEM TO CART" << endl
                    << "Enter the item name:" << endl;
                cin.ignore();
                    getline(cin, tempstring);
                cout << "Enter the item description:" << endl;
                    getline(cin, tempdesc);
                cout << "Enter the item price:" << endl;
                cin >> tempprice;
                cout << "Enter the item quantity:" << endl;
                cin >> tempquant;

                userCart.AddItem(ItemToPurchase(tempstring, tempdesc, tempprice, tempquant));
               
                cin.ignore();
                break;
            case 'c':
                cout << "CHANGE ITEM QUANTITY" << endl
                    << "Enter the item name:" << endl;
                cin.ignore();
                getline(cin, tempstring);
                userCart.ModifyItem(tempstring);
                cin.ignore();

                break;
            case 'i':
                cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
                userCart.PrintDescriptions();
                cin.ignore();
                break;
            case 'o':
                cout << "OUTPUT SHOPPING CART"<< endl;
                userCart.PrintTotal();
                cin.ignore();
                break;
            case 'q':
                break;
        }
    }

    return 0;
}
////////////////////////////////////////////////////////
void PrintMenu(ShoppingCart userCart)
{
}

void PrintOptions()
{
    cout<< "MENU" << endl << "a - Add item to cart" << endl
        << "d - Remove item from cart" << endl
        << "c - Change item quantity" << endl
        << "i - Output items' descriptions" << endl
        << "o - Output shopping cart" << endl
        << "q - Quit"<< endl << endl;
}
