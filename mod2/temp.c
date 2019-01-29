/*
 * =====================================================================================
 *
 *       Filename:  temp.c
 *
 *    Description:  go from C to F.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:28:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#define CELSIUS 0
#define FAHRENHEIT 1
#define BOIL_CEL 100
#define BOIL_FAHR 212
#define FREEZE_CEL 0
#define FREEZE_FAHR 32

// Constants

// Function Prototypes

// Main Function
int main()
{
    double in_temp = 7.9; //Celsius
    double out_temp =0.0;
    int choice=0;
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit:");
    scanf("%d", &choice);

    if(choice==0)
        {
            printf("Enter the temperature in Celius: ");
            scanf("%lf", &in_temp);
            out_temp=(in_temp*9/5)+32;
            printf("The temperature is %lf F.\n\n", out_temp);

        }
    else if(choice==1)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        out_temp=(in_temp-32)*5/9;
        printf("The temperature is %lf C.\n\n", out_temp);

    }
    else
    {
        printf("What are you doing, type a 1 or 0.\n\n");
    }
    if(choice == CELSIUS)
    {
        if(in_temp >=BOIL_CEL)
        {
            printf("Your water is boiling.\n");
        }
        else if(in_temp>=FREEZE_CEL)
        {
            printf("Your water is liquid.\n");
        }
        else
        {
            printf("Your water is frozen.\n");
        }
    }
    else if(choice == FAHRENHEIT)
    {
        if(in_temp >=BOIL_FAHR)
        {
            printf("Your water is boiling.\n");
        }
        else if(in_temp>=FREEZE_FAHR)
        {
            printf("Your water is liquid.\n");
        }
        else
        {
            printf("Your water is frozen.\n");
        }
    }
    else{
        printf("Seriously put either a 1 or 0.\n\n");
    }
/*  
    printf("The temperature is %lf Celsius\n", temp);
    printf("What is the temperature in Ogen now: \n");
    scanf("%lf", &temp);
    printf("I see, your temp is %lf in F.\n", (temp*9/5)+32);
*/

    return 0;
}
// Function Definitions


