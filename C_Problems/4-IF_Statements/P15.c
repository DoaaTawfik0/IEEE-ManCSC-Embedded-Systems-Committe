/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(15):
....Write a C program to input side of a triangle and check whether triangle is valid or not using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int side1,side2,side3;
    /*Asking User to enter Three sides of a triangle*/
    printf("Enter First side: ");
    scanf(" %d",&side1);
    printf("Enter Second side: ");
    scanf(" %d",&side2);
    printf("Enter Third side: ");
    scanf(" %d",&side3);
    /*Implementing IF Else to check whether a triangle is valid or not */
    if ( (side1 + side2 > side3 ) && (side1 + side3 > side2 ) && (side2 + side3 > side1 ) )
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}
