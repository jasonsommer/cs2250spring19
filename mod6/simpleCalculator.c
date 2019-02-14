/*
 * =====================================================================================
 *
 *       Filename:  simpleCalculator.c
 *       Usage:     ./simpleCalculator.out <PARAM1> <PARAM2>
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:29:14 AM
 *       Revision:  none
 *       Compiler:  gcc simpleCalculator.c -o simpleCalculator.c.out
 *
 *         Author:  Jason Sommer (), Jasonsommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define ADD 1
#define SUB 2
#define MUL 3
#define EXIT 0

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
        int choice= 0;
        int num1, num2;
        //int cont =0;
        //vALIDATE ARGUMENT COUNT,
        if(argc != 3)
        {
            printf("MIssing input parameters");
            printf("Usage: %s <PARM1><PARAM2>\n", argv[0]);
            return 1;
        }
        num1= atoi(argv[1]);
        num2 = atoi(argv[2]);
        do
        {
        printf("What do you want to do with these numbers?\n");
        printf("\t 1) Addition\n");
        printf("\t 2) Subtraction\n");
        printf("\t 3) Multiplication\n");
        printf("\t 0) Quit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case ADD:
                printf("The sum of %d + %d is %d\n", num1, num2, num1+num2);
                break;
            case SUB:
                printf("%d-%d is %d\n", num1, num2, num1-num2);
                break;
            case MUL:
                printf("%dx%d is %d\n", num1, num2, num1*num2);
                break;
            case EXIT:
                printf("Goodbye\n\n");
                return 1;
            default:
                printf("Unsupported function\n");                
        }
        }while(choice != EXIT);// end of while
        //return 1 otherwise
    printf("GoodBye\n");
    return 0;
}
// Function Definitions


