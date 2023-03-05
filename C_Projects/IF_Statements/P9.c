/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(9):
....Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else.
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
    /*Implementing IF Else to check whether given character is alphabet, digit or special character*/
    if ( (Character >= '0') && (Character <= '9') )

    {
        printf("Character %c is Digit",Character);
    }
    else if ( ((Character >= 'a') && (Character <= 'z')) || ((Character >= 'A') && (Character <= 'Z')) )
    {
        printf("Character %c is Character",Character);
    }
    else
    {
        printf("Character %c is a special Character",Character);
    }
    return 0;
}
