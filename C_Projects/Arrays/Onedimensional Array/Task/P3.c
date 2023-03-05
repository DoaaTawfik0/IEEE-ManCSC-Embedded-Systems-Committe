/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(3):
....Write a C program to read elements in an array and find the sum of array elements.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#define Max_Size 1000 //max size of array
int main()
{
    int arr[Max_Size];//Array decleration
    int size,sum=0;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
//for Loop To take Elements of Array From User
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
//for Loop To find Sum of Array Elements
   for(int i=0;i<size;i++)
    {
      sum+=arr[i];
    }
    printf("Sum of Array Elements is: %d",sum);


    return 0;
}
