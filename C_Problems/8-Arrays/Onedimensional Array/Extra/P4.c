/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(4):
....Write a C program to input elements in an array from user, find maximum and minimum element in array.
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
/* Assume first element as maximum and minimum */
    int MAX=arr[0];
    int MIN=arr[0];
    for(int i=1;i<size;i++)
    {
/*Check if current element is greater than MAX or not*/
        if(MAX<arr[i])
        {
            MAX=arr[i];
        }
/*Check if current element is less than MIN or not*/
        if(arr[i]<MIN)
        {
            MIN=arr[i];
        }
    }
/*printing maximum and minimum elements*/
    printf("Maximum Element is: %d\n",MAX);
    printf("Minimum Element is: %d\n",MIN);

    return 0;
}
