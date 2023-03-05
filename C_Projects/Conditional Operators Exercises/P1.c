/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:conditional/ternary operator
Problem(1):
....Write a C program to input two numbers and find maximum between two numbers using conditional/ternary operator ?:.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int number1,number2;
    /*Asking User to enter two Numbers*/
    printf("Enter First Number: ");
    scanf(" %d",&number1);
    printf("Enter Second Number: ");
    scanf(" %d",&number2);
    /*implementing Ternary operator*/
    (number1>number2)?printf("Maximum: %d",number1):printf("Maximum: %d",number2);
    return 0;
}
