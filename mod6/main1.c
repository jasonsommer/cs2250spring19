#include <stdio.h>
#define NUMP 5
int main(void) {
int jersey[NUMP];
int rating[NUMP];
char option;
int temnum=0;
int temtwo=0;
int temthre=0;

for(int i=0; i<NUMP; i++)
{
    printf("Enter player %d's jersey number:\n", i+1);
    scanf("%d", &jersey[i]);
    printf("Enter player %d's rating:\n", i+1);
    scanf("%d", &rating[i]);
	printf("\n");
}
printf("ROSTER\n");
for(int i=0; i<NUMP; i++)
{
    printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
}
   printf("\n");

printf("MENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n\nChoose an option:\n");
scanf("%c", &option);
while(option != 'q')
{
if(option== 'o')
{
	printf("ROSTER\n");
	for(int i=0; i<NUMP; i++)
	{
    	printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
	}
}
else if(option== 'u')
{
	printf("Enter a jersey number:\n");
	scanf("%d", &temnum);
	printf("Enter a new rating for player:\n");
	scanf("%d", &temtwo);
		for(int i = 0; i<NUMP; i++)
			{
				if(temnum==jersey[i])
					{
						rating[i]=temtwo;
					}
			}
}
else if(option== 'a')
{
	printf("Enter a rating:\n");
	scanf("%d", &temnum);
	printf("\nABOVE %d\n", temnum);
	for(int i=0; i<NUMP; i++)
	{
		if(rating[i]>temnum)
		{
		printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
		}
	}
}
else if(option == 'r')
{
	printf("Enter a jersey number:\n");
	scanf("%d", &temnum);
	printf("Enter a new jersey number:\n");
	scanf("%d", &temtwo);
	printf("Enter a rating for the new player:\n");
	scanf("%d", &temthre);
	for(int i = 0; i< NUMP; i++)
	{
		if(jersey[i]==temnum)
		{
		jersey[i]=temtwo;
		rating[i]=temthre;
		}
	}
}
else
{

}
}




   return 0;
}