/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(7):
....Write a C program to input a character from user and check whether the given character is alphabet or not using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    char Character;
    /*Asking User to enter Any Character*/
    printf("Enter any Character: ");
    scanf(" %c",&Character);
    /*Implementing IF Else to check whether the given character is alphabet or not*/
    if ( ((Character>='a')&& (Character<='z')) || ((Character>='A')&& (Character<='Z')) )
    {
        printf("Character %c is Alphabet\n",Character);
    }
    else
    {
        printf("Character %c is not Alphabet\n",Character);
    }


    return 0;
}
