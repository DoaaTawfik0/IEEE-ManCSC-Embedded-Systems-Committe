/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(7):
....Write a C program to input elements in array and count negative elements in array.
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
    int negative=0;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
/*for Loop To take Elements of Array From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
/*for Loop To find negative elements*/
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
          negative++;
        }
    }
    printf("Total Negative elements: %d\n", negative);




    return 0;
}