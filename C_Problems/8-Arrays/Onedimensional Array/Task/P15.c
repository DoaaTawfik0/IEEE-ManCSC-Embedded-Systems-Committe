/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(15):
....Write a C program to input elements in two array and merge two array to third array.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    int size1,size2;
    printf("Enter Size of first Array: ");
    scanf(" %d",&size1);
    printf("Enter %d Elements of First Array:\n",size1);
    int array1[size1];//Array decleration
/*for Loop To take Elements of Array1 From User*/
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&array1[i]);
    }
/*-----------------------------------------------------------*/
    printf("Enter Size of Second Array: ");
    scanf(" %d",&size2);
    printf("Enter %d Elements of Second Array:\n",size2);
    int array2[size2];//Array decleration
/*for Loop To take Elements of Array1 From User*/
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&array2[i]);
    }
/*-----------------------------------------------------------*/
/*Merge to Arrays by copying them both in one array*/
    int MergeArray[size1+size2];
    for(int i=0;i<size1;i++)
    {
        MergeArray[i]=array1[i];
    }
    for(int i=size1;i<(size1+size2);i++)
    {
        MergeArray[i]=array2[i-size1];
    }
/*Sorting Merged Array*/
    for(int i=0;i<(size1+size2);i++)
    {
        for(int j=0;j<(size1+size2);j++)
        {
            if(MergeArray[i]<MergeArray[j])
            {
                int temp=MergeArray[i];
                MergeArray[i]=MergeArray[j];
                MergeArray[j]=temp;

            }
        }
    }
/*Printing Array*/
    for(int i=0;i<(size1+size2);i++)
    {
        printf("%d ",MergeArray[i]);
    }

    return 0;
}
