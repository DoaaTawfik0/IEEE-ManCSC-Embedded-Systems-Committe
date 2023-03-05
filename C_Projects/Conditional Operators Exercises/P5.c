/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:conditional/ternary operator
Problem(5):
....Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    char Character;
    /*Asking User to enter any character*/
    printf("Enter Any Character: ");
    scanf(" %c",&Character);
    /*implementing Ternary operator*/
    ((Character>='a')&&(Character<='z')) || ((Character>='A')&&(Character<='Z'))?
    printf(" character %c is ALPHABET ",Character):
    printf(" character %c is not ALPHABET ",Character);
    return 0;
}
