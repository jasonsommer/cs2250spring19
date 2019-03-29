/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:48:27 AM
 *       Revision:  none
 *       Compiler:  gcc PlaylistNode.c -o PlaylistNode.out
 *          Usage:  ./PlaylistNode.out
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

// Function Definitions

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songlengthInit, PlaylistNode* nextLoc)
{
    //1) set all your strings in thisNode to the input parameters, so probably a strcpy
    strcpy(thisNode->uniqueID,idInit);
    strcpy(thisNode->songName, songNameInit);
    strcpy(thisNode->artistName, artistNameInit);
    thisNode->songLength=songlengthInit;
    //2) Set all your integers in thisNode to the input parameters
    //
    //3) Set the next Node pointer to nextLoc
    thisNode->nextNodeptr=nextLoc;
    return;
}
////////////////////////////////////////////////////////////////////////////////
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
 PlaylistNode* tempNext = NULL;
    // 1) set temp to thisNode->nextPointer
    // 2) update thisNode->NextPointer to newNode
    // 3) set newNode->nextPointer to tempNext
    tempNext= thisNode->nextNodeptr;
    thisNode->nextNodeptr = newNode;
    newNode->nextNodeptr = tempNext;


    return;
}
////////////////////////////////////////////////////////////////////////////////
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    // 1) set the thisNode->NextNodeptr to newNode
    // should be one or two lines of code
    newNode=thisNode->nextNodeptr;
    return;
}
///////////////////////////////////////////////////////////////////////////////
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode) //this one is done
{
    //1) return the next member in the list

    return thisNode->nextNodeptr;
}

void PrintPlaylistNode(PlaylistNode* thisNode)
{
    // 1)Print each member of the PlaylistNode
    //
    printf("Unique ID: %s\n", thisNode->uniqueID);
    printf("Song Name: %s\n", thisNode->songName);
    printf("Artist Name: %s\n", thisNode->artistName);
    printf("Song Length (in seconds): %d\n", thisNode->songLength);
    return;
}
//////////////////////////////////////////////////////////////
void PrintMenuOptions()
{
    printf("a - Add song\n");
    printf("r - Remove song\n");
    printf("c - Change position of song\n");
    printf("s - Output songs by specific artist\n");
    printf("t - Output total time of playlist (in seconds)\n");
    printf("o - Output full playlist\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");

    return;
}
/////////////////////////////////////////////////////////////////////////

int NumberOfSongs(PlaylistNode* thisNode[])
{
    int numSongs = 0;
    for(int i = 1; i<=MAX; i++)
    {
        if(thisNode[i-1]->songLength!='0')
        {
            numSongs++;
        }
    }
            

return numSongs;
}
///////////////////////////////////////////////////////
PlaylistNode * delete_item(PlaylistNode * curr, char x[MAX])
{
    PlaylistNode* next;
    if(curr == NULL)
            {
           // printf("not found\n");
            return NULL;
            }
        else if(strcmp(curr->uniqueID, x)==0)
            {
            next = curr->nextNodeptr;
            free(curr);
            return next;
            }
        else
            {
            curr->nextNodeptr= delete_item(curr->nextNodeptr, x);
            return curr;
            }
 }
///////////////////////////////////////
/*
char getName(PlaylistNode * thisNode, char x[MAX])
{
    char name[MAX];


    while(thisNode!=NULL)
    {
        if(strcmp(thisNode->uniqueID, x)==0)
        {
            strcpy(name, thisNode->songName);
        }
        thisNode=GetNextPlaylistNode(thisNode);
    }



return ;
}
    */



