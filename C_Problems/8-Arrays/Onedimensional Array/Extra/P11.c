/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(11):
....Write a C program to input elements in array and find frequency of each element in array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Max_Size 1000 //max size of array
int main()
{

    int array1[Max_Size];//Array decleration
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
/*For loop to find frequency of each element*/
     int counter=1;
     for(int i=0;i<size;i++)
     {
         if(array1[i] == array1[i+1])
         {
             counter++;
         }
         else if (array1[i] != array1[i+1])
         {
             printf("%d occurs %d times\n",array1[i],counter);
             counter=1;
         }
     }

    return 0;
}
