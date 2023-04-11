/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(1):
....Write a C program to find maximum between two numbers using if else.
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
    /*Implementing IF Else to find maximum number*/
    if(number1>number2)
    {
        printf("Maximum Number is %d\n",number1);
    }
    if(number2>number1)
    {
        printf("Maximum Number is %d\n",number2);
    }
    if(number1==number2)
    {
       printf("both numbers are equal");
    }

    return 0;
}
