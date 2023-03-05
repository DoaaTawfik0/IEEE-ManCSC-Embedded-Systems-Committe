/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(11):
....Write a C program to find power of any number (x^y).
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Vriables Decleration*/
    int number,exponent,power;
    /*Asking user to enter any number and power*/
    printf("Enter Any Number: ");
    scanf(" %d",&number);
    printf("Enter exponent: ");
    scanf(" %d",&exponent);
    /*Calculating (number^exponent) */
    power=pow(number,exponent);
    /*OUTPUT*/
    printf(" %d ^ %d = %d",number,exponent,power);

    return 0;
}
