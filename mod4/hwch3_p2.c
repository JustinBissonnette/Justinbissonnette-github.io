/*
 * =====================================================================================
 *
 *       Filename:  hwch3_p2.c
 *
 *    Description:  hw3_p2
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char oil[11];
    int oilValue = 35;
    char tire[] ="tire rotation";
    int tireValue = 19;
    char carWash[]="Car wash";
    int carWashValue = 7;
    char carWax[]="Car wax";
    int carWaxValue = 12;
    printf("Davy's auto shop services\nOil change -- $35 \nTire rotation -- $19\nCar wash -- $7\nCar wax - $12");
    strcpy(oil, "Oil Change")
        printf("[%s] $%d\n", oil, oilValue);
        printf("[%s] $%d\n", tire, tireValue);
        printf("[%s] $%d\n", carWash, carWashValue);

    return 0;
}
// Function Definitions


