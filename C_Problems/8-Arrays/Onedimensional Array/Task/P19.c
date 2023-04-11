/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(19):
....Write a C program to input elements in array and sort array elements in ascending or descending order.
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
/*sorting Array*/

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array1[i]<array1[j])
            {
                int temp=array1[i];
                array1[i]=array1[j];
                array1[j]=temp;
            }

        }

    }
/*Printing Array*/
    printf("Array elements after Sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",array1[i]);
    }

    return 0;
}
