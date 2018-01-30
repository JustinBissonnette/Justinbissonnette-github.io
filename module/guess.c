/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  guess a number form 0-9 and win a prize
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int input;
    int guess;
    printf("Please enter a number form 0-9");
    scanf("%d", &input);
    srand((int)time(0));
    guess = rand() % 10;
    printf("You entered %d and guess is %d\n", input, guess);
    return 0;
}
// Function Definitions


