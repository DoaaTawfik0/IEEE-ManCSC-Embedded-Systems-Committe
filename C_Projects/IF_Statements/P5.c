/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(5):
....Write a C program to check whether a number is even or odd using if else.
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
    /*Implementing IF Else to check whether a number is even or odd*/
    if (number%2==0)
    {
        printf("Number %d is Even Number\n",number);
    }
    else
    {
        printf("Number %d is odd Number\n",number);
    }


    return 0;
}
