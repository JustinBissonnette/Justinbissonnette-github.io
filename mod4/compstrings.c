/*
 * =====================================================================================
 *
 *       Filename:  compstrings.c
 *
 *    Description:  comparing strings
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin Bissonnette (), Justinbissonnette@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> // to compare stirngs
// Constants

// Function Prototypes

// Main Function
int main()
{
    char word[51];
    char word2[51];
    printf("Enter a word:\n");
    scanf("%s", word);
    printf("you entered[%s]\n", word);
    if(strcmp(word, "hello") == 0)
    {
        printf("you entered hello\n");
    }
    else
    {
        printf("you did not enter hello\n");
    }
    strcpy(word2, word); // word2 == word
    printf("[%s] and [%s]\n", word, word2);

    return 0;
}
// Function Definitions


