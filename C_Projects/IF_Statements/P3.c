/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(3):
....Write a C program to check positive, negative or zero using simple if or if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int number;
    /*Asking User to enter Any Numbers*/
    printf("Enter First Number: ");
    scanf(" %d",&number);
    /*Implementing IF Else to check positive, negative or zero*/
    if (number>0)
    {
        printf(" %d is Positive Number\n",number);
    }
    else if (number<0)
    {
        printf(" %d is Negative Number\n",number);
    }
    else
    {
        printf(" %d is Zero\n",number);
    }
    return 0;
}
