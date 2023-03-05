/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(16):
....Write a C program to input elements in array and find reverse of array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements of Array:\n",size);
    int array1[size];//Array decleration
/*for Loop To take Elements of Array1 From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
/*-----------------------------------------------------------*/
/*finding reversed Array*/
    int ReversedArray[size];
    for(int i=size-1,j=0;i>=0,j<size;i--,j++)
    {
        ReversedArray[i]=array1[j];
    }
/*Printing Array*/
    printf("Array elements after reverse: ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",ReversedArray[i]);
    }

    return 0;
}
