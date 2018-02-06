/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  multiplication table form 1-10
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:29 AM
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
int num1=1;
int num2=1;
//int result;
num1=1;
while(num1>0 && num1<11)
{
num2=1;


    while(num2>0 && num2<11)
    {
        printf("[%3d]",num1*num2);
        num2++;


    }
    printf("\n");
    num1++;
    


}


    return 0;
}
// Function Definitions


