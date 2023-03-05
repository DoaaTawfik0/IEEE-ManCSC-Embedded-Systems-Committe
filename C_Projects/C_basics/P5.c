/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(5):
....Write a C program to input length and width of a rectangle and find area of the given rectangle.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    int Length,Width,Area;
    /*Asking User to Enter Length and width*/
    printf("Enter Length of rectangle: ");
    scanf(" %d",&Length);
    printf("Enter Width of rectangle: ");
    scanf(" %d",&Width);
    /*Finding Perimeter*/
    Area=(Length*Width);
    /*OUTPUT*/
    printf("Area of Rectangle is %d sq.units",Area);

    return 0;
}
