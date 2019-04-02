/*
 * =====================================================================================
 *
 *       Filename:  create_pw.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:31:14 AM
 *       Revision:  none
 *       Compiler for c:  gcc create_pw.cpp -o create_pw.out
 *       Compiler for c++:  g++  create_pw.cpp -o create_pw.out
 *          Usage:  ./create_pw.out
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



// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    string full_name;
    cout << "Create an account" << endl << endl;
    //take input
    cout << "Enter full name: ";
    // To capture strings with/without spaces use: getline
    getline(cin, full_name);
    cout << "Hi " << full_name << "welcome to WSU branch" << endl;

    string password;
    bool valid_password =false;


    while(!valid_password)
    {
        valid_password = true;
        cout << "Enter your pasword: ";
        getline(cin, password);
        //at least 8 chars
        if(password.length() < 8)
        {
            cout << "Password must be at least 8 characters." << endl;
            valid_password = false;
        }
        //must contain 1 num
        auto index = password.find_first_of("0123456789");
        if(index == -1)
        {
            cout << "Password must include a number" << endl;
            valid_password = false;
        }
        //must contain 1 special
        bool special_char = false;
        for(char c : password)
            if(ispunct(c))
            {
                {
                    special_char = true;
                    break;
                }

            }
        if(!special_char)
        {
            cout << "Password must include a special charater" << endl;
            valid_password = false;
        }
        if(!valid_password)
        {
            cout << endl << password << "i is invalid" << endl;
            cout << "Please try again" << endl;
        }
    }

    cout << "Thank you" << endl;

    return 0;
}
// Function Definitions


