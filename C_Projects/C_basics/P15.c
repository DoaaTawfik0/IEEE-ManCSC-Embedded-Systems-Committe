/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(15):
....Write a C program to input side of an equilateral triangle from user and find area of the given triangle.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Vriables Decleration*/
    int side;
    float area;
    /*Asking user to enter side of a Triangle */
    printf("Enter side of a triangle: ");
    scanf(" %d",&side);
    /*Calculating Area of a triangle*/
    area=(sqrt(3)/4)*(side*side);
    /*OUTPUT*/
    printf("---------------------------------------\n");
    printf("Area of equilateral triangle is %.2f sq.units\n",area);
    return 0;
}
