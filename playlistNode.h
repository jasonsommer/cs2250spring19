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

#define MAX 50
typedef struct PlaylistNode_struct
{
     char uniqueID[MAX];
     char songName[MAX];
     char artistName[MAX];
     int songLength;
     struct PLaylistNode_struct*  nextNodeptr;   //address of next member, null for last member

}PlaylistNode;

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songlengthInit, PlaylistNode* nextLoc);

void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);

void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);

PlaylistNode* GetNextPlaylistNode();

void PrintlistNode();
#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */

