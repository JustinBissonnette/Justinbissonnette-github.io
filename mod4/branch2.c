/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  test switch statements.
 *    note: only works on integers, single char
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
int pos = 0;
    printf("what is your position?\n");
    scanf("%d", &pos);
    switch(pos)
    {
        case 1:     // if (pos == 1)
        printf("You get the gold medal\n");
        break;

        case 2:     // if (pos == 2)
        printf("You get the silver medal\n");
        break;

        case 3:     // if (pos == 3)
        printf("you get the bronze medal\n");
        break;

        default: //else
        printf("You get no medal\n");


    }
    return 0;
}
// Function Definitions


