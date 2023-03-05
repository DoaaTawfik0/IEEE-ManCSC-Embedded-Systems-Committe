/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(4):
....Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    int Length,Width,Perimeter;
    /*Asking User to Enter Length and width*/
    printf("Enter Length of rectangle: ");
    scanf(" %d",&Length);
    printf("Enter Width of rectangle: ");
    scanf(" %d",&Width);
    /*Finding Perimeter*/
    Perimeter=2*(Length+Width);
    /*OUTPUT*/
    printf("Perimeter of Rectangle is %d Units",Perimeter);

    return 0;
}
