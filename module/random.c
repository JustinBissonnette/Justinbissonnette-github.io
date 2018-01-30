/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  learn how to use random numbers.
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //for rand() func
#include <time.h> //fpr sramd() funciton: set your random seed
// Constants

// Function Prototypes

// Main Function
int main()
{
    srand((int)time(0));
printf("A random num[%d]\n", rand()%100);
printf("A random num[%d]\n", rand()%100);
printf("A random num[%d]\n", rand()%100);
printf("A random num[%d]\n", rand()%100);
    
    return 0;
}
// Function Definitions


