/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(4):
....Write a C program to input elements in an array and print array using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //max size of array
int main()
{
    int arr[MAXSIZE] ;
    int arrSize , i ; //Normal Variables
    int *arrPtr ; //Pointer to firs element of array
    arrPtr = arr;
    printf("Enter Size of Array: ");
    scanf("%d",&arrSize);
    printf("Enter Array Elements: \n");
    //Taking elements of array from user
    for(i = 0 ; i < arrSize ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    //printing elements of array using Pointers
    printf("Array Elements: ");
    for(i = 0 ; i < arrSize ; i++)
    {
        printf("%d ",*arrPtr);
        arrPtr++; //move Pointer to next array element
    }
    return 0;
}


