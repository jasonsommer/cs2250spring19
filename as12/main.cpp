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
#include "ItemToPurchase.h"
using namespace std;

// Function Definitions
//
int ItemCost(int price, int quant);


int main(int argc, char* argv[])
{
//ItemToPurchase first;
//ItemToPurchase second;

string temp;
int tempprice;
int tempquant;


cout << "Item 1"<< endl << "Enter the item name:" << endl;
getline(cin, temp);
cout << "Enter the item price:" << endl;
cin >> tempprice;
cout << "Enter the item quantity:" << endl;
cin >> tempquant;

ItemToPurchase first(temp, tempprice, tempquant);

cin.ignore();


cout << "Item 2"<< endl << "Enter the item name:" << endl;
getline(cin, temp);
cout << "Enter the item price:" << endl;
cin >> tempprice;
cout << "Enter the item quantity:" << endl;
cin >> tempquant;

ItemToPurchase second(temp, tempprice, tempquant);

cout << "TOTAL COST" << endl
     << first.GetName()<< " " << first.GetQuantity()<< " @ $"
     << first.GetPrice()<< " = $"
     << first.GetPrice() * first.GetQuantity()<< endl

     << second.GetName()<<" " <<second.GetQuantity()<< " @ $"
     << second.GetPrice()<< " = $"
     << second.GetPrice() * second.GetQuantity() << endl << endl

     <<"Total: $"<<(first.GetPrice()*first.GetQuantity()+second.GetQuantity()*second.GetPrice())<< endl;
             

    return 0;
}




int ItemCost(int price, int quant)
{
    return price*quant;
}
