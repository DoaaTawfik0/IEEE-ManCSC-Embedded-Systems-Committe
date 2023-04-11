/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(13):
....Write a C program to input elements in array from user and count duplicate elements in array.
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
/*for Loop To take Elements of Array1 From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
//--------------------------------------------
/*Sorting Elements of array*/
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
           if(array1[i] > array1[j]) {
              int temp = array1[i];
               array1[i] = array1[j];
               array1[j] = temp;
           }
        }
    }
/*--------------------------------------------*/
/*For loop to count duplicate elements*/
     int counter;
     for (int i = 0; i < size; i++)
     {
           if(array1[i] == array1[i+1])
           {
              counter++;
           }
     }
    printf("\nTotal number of duplicate elements found in array = %d", counter);

    return 0;
}
