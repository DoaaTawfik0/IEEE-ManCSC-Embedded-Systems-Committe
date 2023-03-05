/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:conditional/ternary operator
Problem(4):
....Write a C program to input a year and check whether year is leap year or not using conditional/ternary operator ?:.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int Year;
    /*Asking User to enter any Year*/
    printf("Enter Any Year: ");
    scanf(" %d",&Year);
    /*implementing Ternary operator*/
    ((Year%4==0)&&(Year%100!=0))||(Year%400==0)?
    printf(" %d is a Leap Year ",Year):
    printf(" %d is Common Year ",Year);
    return 0;
}
