/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 08:49:49 AM
 *       Revision:  none
 *       Compiler for c:  gcc hello.cpp -o hello.out
 *       Compiler for c++:  g++  hello.cpp -o hello.out
 *          Usage:  ./hello.out
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
using namespace std;

// Constants
//




// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num;
    //printout

   cout << "Hello C++" << endl;

   cout << "Enter a number: " << endl;
   //for input use: cin
   cin >> num;
   cout << "You entered: " <<num << endl;


    return 0;
}
// Function Definitions


