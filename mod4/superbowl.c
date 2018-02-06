/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:44:10 AM
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
char qbfn[50]="";
char qbln[50]="";
printf("select a QB, ");
printf("and I'll tell you number of Super bowl wins: \n");
printf("Tom Brady\n");
printf("Peyton Manning\n");
printf("Eli Manning\n");
printf("None\n");
scanf("%s", qbfn);
if ( strcmp(qbfn, "None")==0)
{
    printf("No Super Bowls\n");
}
else 
{
    scanf("%s", qbln);
    printf("Hi %s %s\n",qbfn, qbln);
}


    return 0;
}
// Function Definitions


