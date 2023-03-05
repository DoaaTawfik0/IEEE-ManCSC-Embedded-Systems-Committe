/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(13):
....Write a C Program to input two angles from user and find third angle of the triangle.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Vriables Decleration*/
    int angle1,angle2,angle3;
    /*Asking user to enter Two Angles of a Triangle */
    printf("Enter First Angle: ");
    scanf(" %d",&angle1);
    printf("Enter Second Angle: ");
    scanf(" %d",&angle2);
    /*Calculating Third Angle*/
    angle3=180-(angle1+angle2);
    /*OUTPUT*/
    printf("---------------------------------------\n");
    printf("First Angle is %d\n",angle1);
    printf("Second Angle is %d\n",angle2);
    printf("Third Angle is %d\n",angle3);

    return 0;
}
