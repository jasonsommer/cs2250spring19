/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  give me the angle and i give you the quadrant.
 *                  Standar Quadrants
 *                  If it is on the x or Y axis.
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:42:04 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> //to include regular abs.
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;

    printf("Give me an angle, and I'll tell you where it is: ");
    scanf("%d", &angle);

    angle= angle %360;
    if (angle <0)
    {
        angle = abs(360 + angle);
    }


  printf("Your angle is ");
    if(angle>0 && angle<90)
    {
        printf("in Quadrant I");
    }
    else if(angle>90 && angle<180)
    {
        printf("in Quadrant II");
    }
    else if(angle>180 && angle<270)
    {
        printf("in Quadrant III");
    }
    else if(angle>270 && angle<360)
    {
        printf("in Quadrant IV");
    }
    else 
    {
        
          if(angle == 0 || angle ==180)
          { 
              printf("on the X axis");
            }
          else if (angle == 90 || angle ==270)
          {
              printf("on the Y axis");
          }
    }
/*
 * switch(angle)
 * { 
 * case 0:
 * printf("The angle is on the positive X axis\n");
 * break;
 * case 90:
 * printf(""   "");
 * break;
 * case 180:
 * printf(""  "");
 * break;
 * case 270:
 * printf(""    "");
 * break;
 * }
 * */

  printf("\n");

    return 0;
}
// Function Definitions


