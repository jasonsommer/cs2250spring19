/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  work with hexadecimal
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:00:36 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;
// Function Prototypes

// Main Function
int main()
{
    unsigned char hex = 0xF;

    printf("Hex %x and dec %d\n", hex, hex);
    //1) Ask user to enter a hex number (1byte max)
    scanf("%hhx", &hex);
    //2) Tell me which bits/pins are on
    if(hex & PIN1)
    {
        printf("PIN1 is ON\n");
    }
    return 0;
}
// Function Definitions


