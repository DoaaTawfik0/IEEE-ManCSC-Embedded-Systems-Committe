/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(4):
....Write a C program to check whether a number is divisible by 5 and 11 or not using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int number;
    /*Asking User to enter Any Number*/
    printf("Enter First Number: ");
    scanf(" %d",&number);
    /*Implementing IF Else to check whether a number is divisible by 5 and 11 or not*/
    if ( (number%5==0) && (number%11==0) )
    {
        printf("Number %d is divisible by 5 and 11",number);
    }
    else
    {
        printf("Number %d is not divisible by 5 and 11",number);
    }


    return 0;
}
