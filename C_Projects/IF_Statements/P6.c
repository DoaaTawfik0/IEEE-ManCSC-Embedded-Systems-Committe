/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(6):
....Write a C program to check leap year using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int Year;
    /*Asking User to enter Any Year*/
    printf("Enter any Year: ");
    scanf(" %d",&Year);
    /*Implementing IF Else to check leap year*/
    if ( (Year%4==0) && (Year%100!=0)  || (Year%400==0) )
    {
        printf("Year %d is a Leap Year\n",Year);
    }
    else
    {
        printf("Year %d is a Common Year\n",Year);
    }


    return 0;
}
