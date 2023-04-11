/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(1):
....Write a C program to declare, initialize, input elements in array and print array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    int arr[size];
    printf("Enter %d Elements:\n",size);
//for Loop To take Elements of Array From User
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are\n");
//for Loop To Print Elements of Array
   for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }

    return 0;
}
