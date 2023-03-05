/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(2):
....Write a C program to find maximum between three numbers using ladder if else or nested if.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int number1,number2,number3;
    /*Asking User to enter Three Numbers*/
    printf("Enter First Number: ");
    scanf(" %d",&number1);
    printf("Enter Second Number: ");
    scanf(" %d",&number2);
    printf("Enter Third Number: ");
    scanf(" %d",&number3);
    /*Implementing IF Else to find maximum number*/
    if( (number1>number2) && (number1>number3) )
    {
        printf("Maximum Number is %d\n",number1);
    }
    else if(number2>number3)
    {
        printf("Maximum Number is %d\n",number2);
    }
    else
    {
       printf("Maximum Number is %d\n",number3);
    }

    return 0;
}
