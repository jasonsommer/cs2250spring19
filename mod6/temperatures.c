/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:08 AM
 *       Revision:  none
 *       Compiler:  gcc Temperature.c -o temperature.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUM 40
#define MIN 20
#define MAX 45



int main()
{
   // double ogden[NUM];
    double max_ogden[NUM];
    double min_ogden[NUM];
    int avg;
    srand(time(0));
    //capture mmax and min temp from user
    //
    printf("Enter the max and min Ogden temp for the next %d days\n", NUM);

    for (int i = 0;  i < NUM; i++) 
    {
   
//        printf("%d day max and min\n", i+1);
//        scanf("%lf%lf", &max_ogden[i], &min_ogden[i]);

        min_ogden[i] = ((rand() % MIN) + (rand() % MAX))/2;
        max_ogden[i] = min_ogden[i] + (rand() % (MAX-MIN));
    }
   

   for (int i = 0; i < NUM; i++)
    {
        printf("%2d) max[%6.2lf] min[%6.2lf] temps in Ogden\n",
                i+1, max_ogden[i], min_ogden[i]);
    }
   for (int i = 0;  i < NUM;  i++) 
   {
       avg += min_ogden[i];
       avg += max_ogden[i];
   }
    return 0;
}
// Function Definitions


