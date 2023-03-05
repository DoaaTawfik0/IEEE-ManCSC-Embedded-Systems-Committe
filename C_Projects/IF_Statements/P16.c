/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(16):
....Write a C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int side1,side2,side3;
    /*Asking User to enter Three Sides of a triangle*/
    printf("Enter First side: ");
    scanf(" %d",&side1);
    printf("Enter Second side: ");
    scanf(" %d",&side2);
    printf("Enter Third side: ");
    scanf(" %d",&side3);
    /*Implementing IF Else to check a whether triangle is equilateral, scalene or isosceles triangle */
    if (side1  == side2 && side2 == side3)
    {
        /* All Sides Are Equal*/
        printf("Equilateral triangle.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3 )
    {
        /*Two Sides Are Equal*/
        printf("Isosceles triangle.");
    }
    else
    {
        printf("Scalene triangle.");
    }
    return 0;
}
