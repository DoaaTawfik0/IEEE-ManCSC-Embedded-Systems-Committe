/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(6):
....Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    int radius,diameter;
    float circumference,area;
    const float pi=3.14;
    /*Asking User to Enter Radius of Circle*/
    printf("Enter Radius of Circle: ");
    scanf(" %d",&radius);
    /*Finding diameter, circumference and area*/
    diameter=2*radius;
    circumference=2*pi*radius;
    area=pi*radius*radius;
    /*OUTPUT*/
    printf("Diameter of Circle is %d units\n",diameter);
    printf("Circumference of Circle is %.2f Units\n",circumference);
    printf("Area of Circle is %.2f sq.units\n",area);

    return 0;
}
