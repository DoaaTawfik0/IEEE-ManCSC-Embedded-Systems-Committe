/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(3):
....Write a C program to swap two numbers using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    C program to swap two numbers using pointers.
*/

    int num1 , num2 , Temp ; // Normal Variables
    int *num1Ptr , *num2Ptr ; //Pointers to integer values
    //Initializing Pointers
    num1Ptr = &num1; 
    num2Ptr = &num2;
    printf("Enter 2 Numbers: \n");
    scanf("%d%d", &num1 , &num2); // taking numbers from user
    //Numbers Before Swapping
    printf("Numbers before Swapping\n");
    printf(" num1 = %d \n num2 = %d\n\n", num1 , num2);
    //Swapping Numbers
    Temp = *num1Ptr ;
    *num1Ptr = *num2Ptr ;
    *num2Ptr = Temp ;
    //Numbers After Swapping
    printf("Numbers after Swapping\n");
    printf(" num1 = %d \n num2 = %d\n\n", num1 , num2);
    return 0;
}


