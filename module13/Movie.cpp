/*
 * =====================================================================================
 *
 *       Filename:  Movie.cpp
 *
 *    Description:  Movie Class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:38:40 AM
 *       Revision:  none
 *       Compiler (C++):  g++ Movie.cpp -o Movie.out -lm
 *          Usage:  ./Movie.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>
#include "Movie.h"
using namespace std;

// Function Definitions
void Movie::set_title(string set_title)
{
//    this->title = set_title;  // optional
    title = set_title;
}
/*
Movie::Movie()
{
    title = "";
    year = 1888;
}
Movie::Movie(string title)
{
    set_title(title);
    set_year(1888);
}
*/
Movie::~Movie()
{
    cout<< "Destroying Object" << endl;
}

Movie::Movie(string title, int year, int stars)
{
    set_title(title);
    set_year(year);
    set_stars(stars);
}
void Movie::info()const
{
    int w = 10;
    cout << left
        <<setw(w*3) << "TITLE"
        <<setw(w) << "YEAR" << endl;
    cout << setw(w*3) << get_title()
        << setw(w) << get_year() << endl;
    cout << "NUMBER OF STARS" << get_stars() << endl;

}


void Movie::set_year(int year)
{
    if (year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    // this-> refers to yourself
    // required because of the same name
    this->year = year;
}

// Define Getters
string Movie::get_title() const
{
    return title;
}
        
int Movie::get_year() const
{
    return year;
}
int Movie::get_stars() const
{
    return stars;
}

void Movie::set_stars(int stars)
{
    if (stars>5)
    {
        throw invalid_argument("Stars must be between 0 and 5.");
    }
    this->stars = stars;
}

