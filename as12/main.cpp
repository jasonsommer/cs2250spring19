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
    cout<< "Enter customer's name:" << endl;
    getline(cin, tempName);
    cout<< "Enter today's date:" << endl;
    getline(cin, tempDate);
    cout << endl << "Customer name: " << tempName << endl
        << "Today's date: " << tempDate << endl;
    ShoppingCart userCart(tempName, tempDate);
    while(userInput!='q')
    {
        PrintOptions();
        cin >> userInput;
        switch(userInput)
        {
            case 'd':
                break;
            case 'c':
                break;
            case 'i':
                break;
            case 'o':
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
    cout<< "Menu" << endl << "a - Add item to cart" << endl
        << "d - Remove item from cart" << endl
        << "c - Change item quantity" << endl
        << "i - Output items' descriptions" << endl
        << "o - Output shopping cart" << endl
        << "q - Quit"<< endl << endl << "Choose an option:" << endl;
}
