/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(3):
....Write a C program to swap two numbers using pointers and functions.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
void Swapfun(int *num1Ptr , int *num2Ptr);
int main()
{
/*
   C program to swap two numbers using pointers and functions.
*/

    int num1 , num2 ; // Normal Variables
    printf("Enter 2 Numbers: \n");
    scanf("%d%d", &num1 , &num2); // taking numbers from user
    //Numbers Before Swapping
    printf("Numbers before Swapping\n");
    printf(" num1 = %d \n num2 = %d\n\n", num1 , num2);
    Swapfun(&num1 , &num2);
    //Numbers After Swapping
    printf("Numbers after Swapping\n");
    printf(" num1 = %d \n num2 = %d\n\n", num1 , num2);
    return 0;
}
//function to swap 2 numbers
void Swapfun(int *num1Ptr , int *num2Ptr)
{
   int temp = *num1Ptr ;
   *num1Ptr = *num2Ptr ;
   *num2Ptr = temp ;

}


