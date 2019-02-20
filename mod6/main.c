#include <stdio.h>
#define NUMP 5
int main(void) {
int jersey[NUMP];
int rating[NUMP];

for(int i=0; i<NUMP; i++)
{
    printf("Enter player %d's jersey number:\n", i+1);
    scanf("%d", &jersey[i]);
    printf("Enter player %d's rating:\n", i+1);
    scanf("%d", &rating[i]);
}
printf("ROSTER\n");
for(int i=0; i<NUMP; i++)
{
    printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
}
   /* Type your code here. */

   return 0;
}
