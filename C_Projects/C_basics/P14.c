/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(14):
....Write a C program to input base and height of a triangle and find area of the given triangle.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Vriables Decleration*/
    int base,height;
    float area;
    /*Asking user to enter base and height of a Triangle */
    printf("Enter base of a triangle: ");
    scanf(" %d",&base);
    printf("Enter height of a triangle: ");
    scanf(" %d",&height);
    /*Calculating Area of a triangle*/
    area=(height*base)/2;
    /*OUTPUT*/
    printf("---------------------------------------\n");
    printf("Area of triangle is %.2f sq.units\n",area);
    return 0;
}
