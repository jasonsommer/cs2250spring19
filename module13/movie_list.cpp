/*
 * =====================================================================================
 *
 *       Filename:  movie_list.cpp
 *
 *    Description:  Create a movie list program. Loads information from txt file
 *                  then, it presents the user with a menu to interact with the data.
 *
 *        Version:  1.0
 *        Created:  04/09/2019 09:41:51 AM
 *       Revision:  none
 *  
 *       Compiler for c++:  g++  movie_list.cpp movie_list.cpp -o movie_list.out
 *          Usage:  ./movie_list.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */


// For C++ Cod
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include<vector> //for vectors
#include <iomanip> //pretty output
#include "Movie.h"
using namespace std;


// Constants
const string movie_file = "movies.txt";

void display_menu();
vector<Movie> read_movies_from_file();
void view_movies(const vector<Movie>& movies);

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{

    cout <<"The Movie List program\n" << endl;
    display_menu();
    vector<Movie> movies = read_movies_from_file();
    char command = 'v';
    while(command != 'x')
    {
        view_movies(movies);
        command = 'x';

    }
    return 0;
}
// Function Definitionsi
//
void view_movies(const vector<Movie>& movies)
{

    int width = 8;
    cout << left
        << setw(width / 2) << " " 
        << setw(width * 4) << "TITLE"
        << setw(width) << "YEAR" 
        << setw(width) << "STARS" << endl;
    //loop over vector and rerieve/ get info to get info to get info.
    int number = 1;
    for(Movie movie : movies)
    {
        cout << setw(width / 2) << number
            << setw(width*4)    << movie.get_title()
            << setw(width)      << movie.get_year()
            << setw(width)      << movie.get_stars() << endl;

        number++;
    }
    cout << endl;
}


//
//
//
//
//

vector<Movie> read_movies_from_file()
{
    vector<Movie> movies;
    //Read file
    ifstream input_file(movie_file);
    if(input_file)
    {
        string line;
        while(getline(input_file, line))
                {
                stringstream ss(line); //read the line and cast it as string

                string title;
                int year, stars;
                getline(ss, title, ',');  //third parameter for what to read until
                ss >> year >> stars;    //get yea and stars
               // cout << title << " " << year << " " << stars<< endl;
               //Create and add move object to vector
                movies.push_back(Movie(title, year, stars));
                }
        input_file.close();
    }




    return movies;
}



void display_menu()
{
    cout << "COMMANDS" << endl
        << "v - View movie list" << endl
        << "a - Add a movie" << endl
        << "d - Delete a movie" << endl
        << "x - Exit" << endl << endl;
}

