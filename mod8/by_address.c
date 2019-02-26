/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  Learn how to pass information by preference.
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:35:42 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.c.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void UpdatePosition(double x, double y);

// Main Function
int main(int argc, char* argv[])
{
    float x, y;
    if(argc != 3)
    {
        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }

    x = atof(argv[1]); //convert the first input param to double.
    y = atof(argv[2]); // "" ""
    
    DisplayPosition(x, y);



    return 0;
}

void DisplayPosition(double x, double y)
{
    
    printf("Your initial position is (%4.2lf,%4.2lf)\n", x, y);

}
// Function Definitions


