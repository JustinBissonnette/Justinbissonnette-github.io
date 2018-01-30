/*
 * =====================================================================================
 *
 *       Filename:  branch.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:52:12 AM
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
    int age;
    int temp;
    int temp1;
    int temp2;
    int temp4;
    int temp5;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age >= 18)
    
    {
        printf("you can vote\n");
    }
    else
    {
        temp = 18 - age;
        temp1 = 21 - age;
        temp2 = 65 - age;
        printf("you need to wait %d years to vote\n", temp);
        printf("you need to wait %d years to drink\n", temp1);
        printf("you need to wait %d years to retire\n", temp2);
    }
    if (age >= 21)
    {
        printf("you can also buy alcohol\n");
    }
    if (age >= 65)
    {
        printf("you can now retire\n");
    }
    if (age == 25)
    {
        printf("you are in your prime :)\n");
    }
    else if (age <= 25)
    {
        temp4 = 25 - age;
        printf("you are %d years away from the special message\n", temp4);
    }
    else if (age >= 25)
    {
        temp5 = age - 25;
        printf("you are %d years over the special message\n", temp5);
    }
    printf("adios amigos\n");
    return 0;
}
// Function Definitions


