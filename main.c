#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

typedef struct author
{
   char name[21];
   int books;
} author;


author getString();
author splitter(char input[80]);
int commaStat(char info[80]);



int main(void) {



author Input[50];
char title[50];
char col1[50];
char col2[50];
int l=0;

printf("Enter a title for the data:\n");
fgets(title, 50, stdin);
printf("You entered: %s\n", title);
title[strlen(title)-1]='\0';
printf("Enter the column 1 header:\n");
fgets(col1, 50, stdin);
printf("You entered: %s\n", col1);
col1[strlen(col1)-1]='\0';
printf("Enter the column 2 header:\n");
fgets(col2, 50, stdin);
printf("You entered: %s\n", col2);
col2[strlen(col2)-1]='\0';

for(l=0; Input[l-1].books!=-1; l++)
{

Input[l]=getString();
}

printf("%33s\n", title);
printf("%-20s|%23s\n", col1, col2);
printf("--------------------------------------------\n");
for(int m=0; m!=l; m++)
{
   if((Input[m].books!=-1))
   {
      if(Input[m].books!=0)
      {
          int b = 0;
      while((isalpha(Input[m].name[b])!=0)||Input[m].name[b]==' '||Input[m].name[b]=='.')
      {
          printf("%-c", Input[m].name[b]);// temp.name);
          b++;
      }
      while(b<20)
      {
          printf(" ");
          b++;
      }
   printf("|%23d\n",Input[m].books);
      }
   }
}
printf("\n");

for(int m=0; m!=l; m++)
{
   if((Input[m].books!=-1))
   {
      if(Input[m].books!=0)
      {
          int b = 0;
          int x = 0;
          while((20-strlen(Input[m].name)-x)>0)
          {
             printf(" ");
             x++;
          }
      while((isalpha(Input[m].name[b])!=0)||Input[m].name[b]==' '||Input[m].name[b]=='.')
      {
          printf("%c", Input[m].name[b]);// temp.name);
          b++;
      }
   printf(" ");
   for(int a = 0; a<Input[m].books; a++)
   {
      printf("*");
   }
   printf("\n");
      }
   }
}

   return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
author getString()
{

   
 author temp;
 char tempInput[80];
 
 

 
 
 
 printf("Enter a data point (-1 to stop input):\n");
 fflush(stdin);
 fgets( tempInput, 80, stdin);
 // temp.name[strlen(temp.name) - 1] = '\n';
  temp.name[strlen(temp.name)-1]='\0';
 
 if(tempInput[0]=='-')
   {
      strcpy(temp.name, "********");
      temp.name[strlen(temp.name)]='\0';
      temp.books=-1;
      printf("\n");
      return temp;
   }

   
   
   if(commaStat(tempInput)==0)
   {
      printf("Error: No comma in string.\n\n");
            strcpy(temp.name, "Error");
            temp.name[strlen(temp.name)-1]='\0';
            fflush(stdin);
      temp.books=0;

      return temp;
   }
   else if(commaStat(tempInput)==2)
   {
      printf("Error: Too many commas in input.\n\n");
            strcpy(temp.name, "Error");
            temp.name[strlen(temp.name)-1]='\0';
            fflush(stdin);

      temp.books=0;
      return temp;
   }
   else if(commaStat(tempInput)==3)
   {
      printf("Error: Comma not followed by an integer.\n\n");
            strcpy(temp.name, "Error");
            temp.name[strlen(temp.name)-1]='\0';
            fflush(stdin);
      temp.books=0;
      


      return temp;
   }
   else
   {
      
     
      temp=splitter(tempInput);
      printf("Data string: ");
      for(int b = 0; (isalpha(temp.name[b])!=0)||temp.name[b]==' '||temp.name[b]=='.'; b++)
      {
          printf("%c", temp.name[b]);// temp.name);
      }
      printf("\nData integer: %d\n\n", temp.books);
      
      return splitter(tempInput);
   }
 
 

 
 return temp;
}

//////////////////////////////////////////////////////////////////////////////
int commaStat(char info[80])
{
   int num = 0;
   
   for(int i=0; info[i]!='\n'; i++)
   {
      if(info[i]==',')
      {
         num++;
      }
   }
   
   if(isdigit(info[strlen(info)-2])==0)
   {
      return 3;
   }
   else if(num==0)
   {
      return 0;
   }
   else if(num==1)
   {
      return 1;
   }
   else if(num>=2)
   {
      return 2;
   }
   return 0;
}
   //0 for no comma
   //1 for good
   //2 for too many commas
   //not followed by digit
   
   
///////////////////////////////////////////////////////////////////////////////
author splitter(char input[80])
{
   author temp;
   char tempchar[21];
   int i=0;
   int j=0;
   int k=0;
   
   for(i=0; input[i]!=','; i++)
   {
      temp.name[i]=input[i];
   }
   for(j=i; input[j]!='\0'; j++)
   {
      if(isdigit(input[j])!=0)
      {
         tempchar[k]=input[j];
         k++;
      }
   }
   temp.name[strlen(temp.name)]='\0';
      temp.books=atoi(tempchar);
      fflush(stdin);

   return temp;
   
}
   
   
   
