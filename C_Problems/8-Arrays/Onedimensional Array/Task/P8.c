/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(8):
....Write a C program to input elements in array and copy all elements of first array into second array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Max_Size 1000 //max size of array
int main()
{
    int array1[Max_Size];//Array1 decleration
    int array2[Max_Size];//Array2 decleration
    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
/*for Loop To take Elements of Array1 From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
/*for Loop To copy all elements of first array into second array*/
    for(int i=0;i<size;i++)
    {
        array2[i]=array1[i];
    }
/*--------------------------------------------------------------*/  
/*for Loop To print elements of first array*/
    printf("Array1: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array1[i]);
    }
/*--------------------------------------------------------------*/
/*for Loop To print elements of second array*/ 
    printf("\nArray2: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array2[i]);
    }
    return 0;
}
