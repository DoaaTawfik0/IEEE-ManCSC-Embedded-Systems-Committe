/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(8):
....Write a C program to check whether an alphabet is vowel or consonant using if else.
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
    /*Implementing IF Else to check whether an alphabet is vowel or consonant*/
    if (Character == 'a' || Character == 'e' || Character == 'i' || Character == 'o' || Character == 'u' ||
        Character == 'A' || Character == 'E' || Character == 'I' || Character == 'O' || Character == 'U')

    {
        printf("Character %c is Vowel",Character);
    }
    else if ( ((Character >= 'a') && (Character <= 'z')) || ((Character >= 'A') && (Character <= 'Z')) )
    {
        printf("Character %c is Consonant",Character);
    }
    else
    {
        printf("Character %c is not Vowel or Constant",Character);
    }
    return 0;
}
