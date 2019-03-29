/*
 * =====================================================================================
 *
 *       Filename:  playlistNode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:36:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PLAYLISTNODE__INC__
#define  PLAYLISTNODE__INC__

#include <string.h>
#define MAX 50
typedef struct PlaylistNode_struct
{
     char uniqueID[MAX];
     char songName[MAX];
     char artistName[MAX];
     int songLength;
     struct PlaylistNode_struct*  nextNodeptr;   //address of next member, null for last member

}PlaylistNode;

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songlengthInit, PlaylistNode* nextLoc);

void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);

void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode);

PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode);

void PrintPlaylistNode(PlaylistNode* thisNode);
void PrintMenuOptions();
int NumberOfSongs(PlaylistNode* thisNode[]);
PlaylistNode * delete_item(PlaylistNode * curr, char x[MAX]);
char getName(PlaylistNode * thisNode, char x[MAX]);
#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */

