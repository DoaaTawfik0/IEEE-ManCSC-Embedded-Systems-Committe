/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(6):
....Write a C program to input elements in array from user and count even and odd elements in array.
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
    int even=0,odd=0;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
/*for Loop To take Elements of Array From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
/*for Loop To check Elements of Array (odd OR even)*/
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);



    return 0;
}