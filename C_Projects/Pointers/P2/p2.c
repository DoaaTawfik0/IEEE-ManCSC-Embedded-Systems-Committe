/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(2):
....Write a C program to read two numbers from user and add them using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
/*
   C program to read two numbers from user and add them using pointers.
*/

    int num1 , num2 , sum ; // Normal Variables
    int *num1Ptr , *num2Ptr ; // Poninters to integer Values
    printf("Enter 2 Numbers: \n");
    scanf("%d%d", &num1 , &num2); // taking numbers from user
    num1Ptr = &num1 ; //num1Ptr is pointing to num1 address
    num2Ptr = &num2 ; //num2Ptr is pointing to num2 address
    sum = *num1Ptr + *num2Ptr ; // (*) helpes us to access value
    printf("sum is %d",sum);


    return 0;
}

