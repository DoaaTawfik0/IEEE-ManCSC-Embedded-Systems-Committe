/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(12):
....Write a C program to input elements in array and print all unique elements in array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define Max_Size 1000 //max size of array
int main()
{


    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
    int array1[size];//Array decleration
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
/*Printing array after sorting it*/
    for(int i=0;i<size;i++)
     {
         printf("%d  ",array1[i]);

     }
     printf("\n");
/*--------------------------------------------*/
/*For loop to find unique elements in array*/
     for(int i=0;i<size-1;i++)
     {
         if(array1[i]!=array1[i-1]&&array1[i]!=array1[i+1])
         {

             printf("%d  ",array1[i]);
         }
     }

    return 0;
}
/*-----------------------------------------------------------------
there a problem:in my logic if number one is not equal to the number behind it
 [it will not be printed]
--------------------------------------------------------------------*/
