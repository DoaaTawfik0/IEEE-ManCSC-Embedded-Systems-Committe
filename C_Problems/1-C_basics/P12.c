/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(12):
....Write a C program to enter any number and calculate its Square Root.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Vriables Decleration*/
    int number,Square_Root;
    /*Asking user to enter any number */
    printf("Enter Any Number: ");
    scanf(" %d",&number);
    /*Calculating Square root of number */
    Square_Root=sqrt(number);
    /*OUTPUT*/
    printf("Square Root of %d is %d",number,Square_Root);

    return 0;
}
