/*
 * =====================================================================================
 *
 *       Filename:  charcomp.c
 *
 *    Description:  operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> // for character compiling
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9\n");
    scanf("%c", &num);
    if (num == '0')
    {
        printf("You enetered 0\n");
    }
    else
    { 
        printf("You entered non-zero [%c]\n", num);
    }
    if (isalpha(num) !=0 ) //testing for A-Z a-z
    {
        printf("It is alpha\n");
    }
    else if (isdigit(num) !=0)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("You are not alpha\n");
    }

    return 0;
}
// Function Definitions


