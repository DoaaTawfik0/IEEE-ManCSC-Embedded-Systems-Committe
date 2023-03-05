/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:conditional/ternary operator
Problem(2):
....Write a C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator ?:.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int number1,number2,number3,max;
    /*Asking User to enter three Numbers*/
    printf("Enter First Number: ");
    scanf(" %d",&number1);
    printf("Enter Second Number: ");
    scanf(" %d",&number2);
    printf("Enter Third Number: ");
    scanf(" %d",&number3);
    /*implementing Ternary operator*/
    max=(number1>number2)&&(number1>number3)?number1:(number2>number3)?number2:number3;
    /*OUTPUT*/
    printf("Maximum between %d , %d and %d = %d",number1,number2,number3,max);
    return 0;
}
