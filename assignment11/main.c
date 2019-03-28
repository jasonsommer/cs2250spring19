/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:45:10 AM
 *       Revision:  none
 *       Compiler: gcc main.c PlaylistNode.c -o main.out 
 *          Usage:  ./main.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "PlaylistNode.h"

// Constants

// Function Prototypes
void PrintMenu(char playlistTitle[]);

// Main Function
int main(int argc, char* argv[])
{
    char playlistTitle[50];
    //prompt user for playlist title
    //eliminate the end of line char
    printf("Enter playlist title:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle)-1]= '\0';

    //2) output playlist menu options
    PrintMenu(playlistTitle); //this will be a big function
    return 0;
}
// Function Definitions
//
void PrintMenu(char playlistTitle[])
{
    PlaylistNode * song[MAX];
    //create a bunch of temp variables: chars, ints, and PlaylistNode(pointers)
    char menuOp=' ';
    //output menu option
    //create a loop to print your options
    while(menuOp != 'q')
    {
    printf("%s PLAYLIST MENU\n", playlistTitle);
        //check for valid choices
        PrintMenuOptions();
        scanf("%c", &menuOp);
       switch(menuOp)
       {
           int tempLength = 0;
        //set corresponding menu actions
        //switch menuOP
        case 'a' :// Add a song

        case 'r' :// output playlist message

        case 'c' :// Prompt user for new song location

        case 's' :// search by artist

        case 't' :// Output the total time of all songs of your playlist in seconds
            for(int i=0; i<NumberOfSongs(song); i++)
            {
                tempLength = tempLength + song[i]->songLength;
            }
            printf("OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n");
            printf("Total time: %d seconds\n", tempLength);

        case 'o' :// output full playlist
            printf("%s - OUTPUT FULL PLAYLIST\n", playlistTitle);
            for(int i = 1; i<=NumberOfSongs(song); i++)
            {
                printf("%d\n", i);
                PrintPlaylistNode(song[i-1]);
            }
            if(NumberOfSongs(song)=='0')
            {
                printf("Playlist is empty\n");
            }

                

        case 'q' :// to quit/exit of loop
            break;
        default :
            scanf("%c", &menuOp);
       }
    }
    return;
}


