/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(9):
....Write a C program to insert element in array at specified position.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Max_Size 1000 //max size of array
int main()
{
    int array1[Max_Size];//Array1 decleration
    int array2[Max_Size];//Array1 decleration
    int size;
    printf("Enter Size of Array: ");
    scanf(" %d",&size);
    printf("Enter %d Elements:\n",size);
/*for Loop To take Elements of Array1 From User*/
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
/*-----------------------------------------------*/
    int number,position=0;
    printf("Enter Element to insert: ");
    scanf(" %d",&number);
    printf("Enter position: ");
    scanf(" %d",&position);
/*-----------------------------------------------*/
    if(position > size+1 || position <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
/*
----------------LOGIC To Insert Elements-----------
First:if (position-1) equals to i [we need to insert element in this location]
Second:if (position-1)is greater than i(i need to copy elements of array1[i] and paste it in array2[i])
Third:if (position-1)is less than i(i need to copy elements of array1[i] and paste it in array2[i-1]  
WHY (array2[i-1])?????  to save previous element in (position-1) in the next index and dont lose it
*/
     for(int i=0;i<=size;i++)
    {
        if((position-1)==i)
        {
            array2[i]=number;

        }
        else if((position-1)>i)
        {
            array2[i]=array1[i];
        }
        else if((position-1)<i)
        {
            array2[i]=array1[i-1];
        }
    }
/*LOOP to print array2[i]*/
    for(int i=0;i<=size;i++)
    {
        printf("%d ",array2[i]);
    }

    }
    return 0;
}