/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(3):
....Write a C program to input two numbers and perform all arithmetic operations. 
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    int num1,num2,Difference,product,Quotient,Modulus;
    int sum=0;
    /*Asking User to Enter 2 Numbers*/
    printf("Enter First Number: ");
    scanf(" %d",&num1);
    printf("Enter Second Number: ");
    scanf(" %d",&num2);
    /*performing all arithmetic operations*/
    sum=num1+num2;
    Difference=num1-num2;
    product=num1*num2;
    Quotient=num1/num2;
    Modulus=num1%num2;
    /*OUTPUT*/
    printf("Sum of %d and %d is %d ",num1,num2,sum);
    printf("Difference of %d and %d is %d ",num1,num2,Difference
    printf("product of %d and %d is %d ",num1,num2,product);
    printf("Quotient of %d and %d is %d ",num1,num2,Quotient);
    printf("Modulus of %d and %d is %d ",num1,num2,Modulus);
    return 0;
}
