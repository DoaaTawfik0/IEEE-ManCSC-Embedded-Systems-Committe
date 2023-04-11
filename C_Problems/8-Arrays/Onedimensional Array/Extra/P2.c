/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(2):
....Write a C program to input elements in array and print all negative elements.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#define Max_Size 500 //max size of array
int main()
{
    int arr[Max_Size];//Array decleration
    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
//for Loop To take Elements of Array From User
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative Elements in Array are\n");
//for Loop To Print Negative Elements of Array
   for(int i=0;i<size;i++)
    {
//if current element is negative print its value
        if(arr[i]<0)
        {
          printf(" %d ",arr[i]);
        }

    }

    return 0;
}
