/*
 * =====================================================================================
 *
 *       Filename:  logicalcomp.c
 *
 *    Description:  testing ranges
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:36:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int Grade = 0;
    bool success = true;
    printf("enter your grade percentage\n");
    scanf("%d",&Grade);
    if (Grade >= 90 && Grade <= 100)
    {
        printf("you got an A\n");
    }
    else if (Grade >=80 && Grade <90)
    {
        printf("you got a B\n");
    }
    else if (Grade >=70 && Grade <80)
    {
        printf("you got a C\n");
    }
    else 
    {
        printf("you got an E\n");
        success = false;
    }
    if (success)
    {
        printf("congrats\n");
        
    }
    else
    {
        printf("better luck next time\n");
    }











    return 0;
}
// Function Definitions


