/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:18:07 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


#define JANUARY     1
#define FEBRUARY    2
#define MARCH       3
#define APRIL       4
#define MAY         5
#define JUNE        6
#define JULY        7
#define AUGUST      8
#define SEPTEMBER   9
#define OCTOBER     10
#define NOVEMBER    11
#define DECEMBER    12
// Constants

// Function Prototypes

// Main Function
int main()
{
int month = 0;
int day = 0;
int year = 0;
int monthVer =0;
int dayVer = 0;
char answer = 'y';

while(1)
{
    //Capture user input
    printf("I will tell you if your date is correct. What is the date? (mm/dd/yyyy) ");
    scanf("%d/%d/%d", &month, &day, &year);
    //Use if to validate month
    if(month>0 && month<13)
    {
        monthVer =1;
    }
    else 
    {
        monthVer =0;
    }
    if( year%4==0 && month ==2)
    {
        month=13;
    }

    //Use SWITCH to validate day of the month
    switch(month)
    {
        //Months with 31 days
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            if(day>0 && day<32)
            {
                dayVer =1;
            }

            break;
            //Months with 30 days
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            if (day>0 && day<31)
            {
                dayVer =1;
            }
            break;
            //For febuary
        case FEBRUARY:
            if((day>0 && day<29)||((year%4==0)&&(day>0 && day<30)))
            {
                dayVer =1;
            }

            break;      
            //For leap year
    }



    if(monthVer==1 && dayVer ==1)
    {
        printf("Your date is valid\n");
    }
    else
    {
        printf("Invalid date\n");
    }

    monthVer= 0;
    dayVer=0;

    printf("do you want to continue?(y/n)\n");
    scanf(" %c", &answer);

    if (answer != 'y' && answer != 'Y')
    {
        break; //exit loop
    }


}
printf("\nPeace out sucker\n\n");
    return 0;
}
// Function Definitions


