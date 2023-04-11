/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(2):
....Write a C program to read two numbers from user and add them using Pointers & Functoins
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int sumFun(int *num1Ptr , int *num2Ptr);
int main()
{
/*
    C program to read two numbers from user and add them using Pointers & Functoins
*/
    int num1 , num2 , sum = 0; // Normal Variables
    printf("Enter 2 Numbers: \n");
    scanf("%d%d", &num1 , &num2); // taking numbers from user
    sum = sumFun(&num1 , &num2); // passing by Reference
    printf("Sum is %d",sum);

    return 0;
}
//function to get sum of 2 numbers using Pointers.
int sumFun(int *num1Ptr , int *num2Ptr)
{
    int sum = 0;
    sum = *num1Ptr + *num2Ptr;
    return sum;
}

