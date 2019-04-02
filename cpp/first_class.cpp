/*
 * =====================================================================================
 *
 *       Filename:  first_class.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 10:06:02 AM
 *       Revision:  none
 *       Compiler for c:  gcc first_class.cpp -o first_class.out
 *       Compiler for c++:  g++  first_class.cpp -o first_class.out
 *          Usage:  ./first_class.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */


// For C++ Code
#include <iostream>
using namespace std;

// Constants

struct Movie
{
    string title = "";
    int year = 0;
};


// Function Prototypes
bool Equals(const Movie& my_movie, const Movie& to_compare);
// Main Function
int main(int argc, char* argv[])
{
    Movie movie;
    movie.title = "Batman";  
    movie.year = 2008;

    cout << "MOVIE DATA" << endl << "Title:    " << movie.title << endl
         << "Year:    "<< movie.year<< endl;

    Movie movie2;
    movie2.title = "Batman";  
    movie2.year = 2009;

    cout << "MOVIE DATA" << endl << "Title:    " << movie.title << endl
         << "Year:    "<< movie.year<< endl;

    if(Equals(movie, movie2))
    {
        cout << "Movies are equal" << endl;
    }
    else 
    {
        cout << "Movies are not equal" << endl;
    }



    return 0;
}
// Function Definitions
bool Equals(const Movie& my_movie, const Movie& to_compare)
{
    return (my_movie.title == to_compare.title &&  my_movie.year == to_compare.year);
}

