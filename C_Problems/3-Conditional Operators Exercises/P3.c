/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:conditional/ternary operator
Problem(3):
....Write a C program to input a number and check whether number is even or odd using Conditional/Ternary operator ?:
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int number;
    /*Asking User to enter any Number*/
    printf("Enter Any Number: ");
    scanf(" %d",&number);
    /*implementing Ternary operator*/
    (number%2==0)?
     printf("%d is even",number)
   : printf("%d is odd",number);

    return 0;
}
