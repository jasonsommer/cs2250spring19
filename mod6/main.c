#include <stdio.h>

#define NUM_PEOPLE  5

int main(void) {
    double weight[NUM_PEOPLE];
    double maxWeight=0;
   /* Type your code here. */
    for(int i=0; i<NUM_PEOPLE; i++)
    {

        printf("Enter weight %d:\n", i+1);
        scanf("%lf", &weight[i]);
        if(weight[i]>maxWeight)
        {
            maxWeight=weight[i];
        }
    }
    printf("%lf %lf %lf %lf %lf\n\n", weight[0], weight[1], weight[2], weight[3], weight[4]);
    printf("Total weight: %lf\n", weight[0]+ weight[1]+ weight[2]+ weight[3]+ weight[4]);
    printf("Average weight: %lf\n", (( weight[0]+ weight[1]+ weight[2]+ weight[3]+ weight[4])/NUM_PEOPLE));
    printf("Max weight: %lf\n",maxWeight);

   return 0;
}
