/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(5):
....Write a C program to find largest and second largest element in an array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Max_Size 1000 //max size of array
int main()
{
    int arr[Max_Size];//Array decleration
    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
/*for Loop To take Elements of Array From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
/* Assume largest and second largest element in array are arr[0],arr[1]*/
    int MAX1=arr[0];
    int MAX2=arr[1];
/*for loop to find largest element*/
    for(int i=0;i<size;i++)
    {
/*Check if current element is greater than MAX1 or not*/
        if(MAX1<arr[i])
        {
            MAX1=arr[i];
        }
    }
/*for loop to find Second largest element*/
    for(int i=0;i<size;i++)
    {
/*Check if current element is greater than MAX2 or not&&if it is not equal to MAX1*/
        if(MAX2<arr[i]&&arr[i]!=MAX1)
        {
            MAX2=arr[i];
        }
    }
/*printing largest and second largest element in array*/
    printf("largest Element in array is: %d\n",MAX1);
    printf("second largest Element in array is: %d\n",MAX2);


    return 0;
}