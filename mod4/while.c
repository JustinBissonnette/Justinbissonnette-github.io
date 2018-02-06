/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  practice while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:51:29 AM
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
const int low = 1;
const int max = 15;
// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    unsigned int i = 1;
    printf("Please enter a number from %d-%d:\n",low, max);
    printf(" and I will give you the factorial\n");
    scanf("%d",&num);
    if(low<=num && max>=num)
    {
        printf("Calculating Factorial\n");
    while(num>0)
    {
        
        printf("Num = [%d]\n",num);
        i = i * num;
        num = num -1;

    }
    }
    else
    {
        printf("You did not follow the instructions\n");
    }
    printf("Done, your factorial is [%u]\n",i);


    return 0;
}
// Function Definitions


