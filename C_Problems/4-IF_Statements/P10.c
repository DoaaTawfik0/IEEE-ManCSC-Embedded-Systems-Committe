/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(10):
....Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else.
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
    /*Implementing IF Else to check whether given character is uppercase or lowercase alphabet*/
    if ( (Character >= 'a') && (Character <= 'z') )

    {
        printf("Character %c is LowerCase Alphabet\n",Character);
    }
    else if ( (Character >= 'A') && (Character <= 'Z') )
    {
        printf("Character %c is UpperCase Alphabet\n",Character);
    }
    else
    {
        printf("Character %c is not Alphabet\n",Character);
    }
    return 0;
}
