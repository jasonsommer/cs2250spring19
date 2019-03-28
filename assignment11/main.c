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
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle)-1]= '\0';
    printf("\n");

    //2) output playlist menu options
    PrintMenu(playlistTitle); //this will be a big function
    return 0;
}
// Function Definitions
//
void PrintMenu(char playlistTitle[])
{
    //PlaylistNode * song[MAX];
    PlaylistNode *songHead = NULL;
    PlaylistNode *songTail = NULL;
    PlaylistNode *songCurrent = NULL;
    PlaylistNode *songNext = NULL;
    PlaylistNode temp;
    //create a bunch of temp variables: chars, ints, and PlaylistNode(pointers)
    char menuOp=' ';
//    int tempLength = 0;
    int songQuant = 0;
    char dummyVal = '0';
    //output menu option
    //create a loop to print your options
    while(menuOp != 'q')
    {
        printf("%s PLAYLIST MENU\n", playlistTitle);
        //check for valid choices
        PrintMenuOptions();
        scanf("%c%c", &menuOp, &dummyVal);
        switch(menuOp)
        {
            //set corresponding menu actions
            //switch menuOP
            case 'a' :// Add a song

                printf("ADD SONG\n");
                printf("Enter song's unique ID:\n");
                fgets(temp.uniqueID, 50, stdin);
                temp.uniqueID[strlen(temp.uniqueID)-1]='\0';
                printf("Enter song's name:\n");
                fgets(temp.songName, 50, stdin);
                temp.songName[strlen(temp.songName)-1]='\0';
                printf("Enter artist's name:\n");
                fgets(temp.artistName, 50, stdin);
                temp.artistName[strlen(temp.artistName)-1]='\0';
                printf("Enter song's length (in seconds):\n");
                scanf("%d", &temp.songLength);
                printf("\n");
                // Set head pointer
                songCurrent=(PlaylistNode*)malloc(sizeof(PlaylistNode));
                CreatePlaylistNode(songCurrent, temp.uniqueID, 
                        temp.songName, temp.artistName, temp.songLength, NULL);
                if(songQuant == 0)
                {
                    songHead = songCurrent;
                }
                InsertPlaylistNodeAfter(songNext, songCurrent);
                songNext = songCurrent;

                
                
                
                printf("[%d]\n",songHead->songLength); // TODO Remove later 
                songQuant++;



            case 'r' :// output playlist message

            case 'c' :// Prompt user for new song location

            case 's' :// search by artist

            case 't' :// Output the total time of all songs of your playlist in seconds

//               printf("Total time: %d seconds\n", tempLength);

            case 'o' :// output full playlist
               printf("%s - OUTPUT FULL PLAYLIST\n", playlistTitle);
                if(songQuant==0)
                {
                    printf("Playlist is empty\n\n");
                }
                else
                {
                    songCurrent=songHead;
                    while(songCurrent != NULL)
                    {
                        PrintPlaylistNode(songCurrent);
                        songCurrent=GetNextPlaylistNode(songCurrent);
                    }
                }

            case 'q' :// to quit/exit of loop
                break;
            default :
                scanf("%c", &menuOp);
        }
    }
    return;
}


