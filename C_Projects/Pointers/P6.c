/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(6):
....Write a C program to swap corresponding elements of two arrays using pointers. H
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //max size of array
void inputArray(int *arrPtr ,int size);
void swapArray(int *arrPtr1 , int *arrPtr2 , int *tempPtr, int size);
void outputArray(int *outPtr , int size);

int main()
{
    int arr1[MAXSIZE] , arr2[MAXSIZE] , Temparray[MAXSIZE] ;
    int arrSize  ; //Normal Variables
    //Input size of array from user
    printf("Enter size of array: ");
    scanf("%d",&arrSize);
    //Input elements of first array from user using inputArray Function
    printf("Enter Elements of first array \n");
    inputArray(arr1 , arrSize);
    //Input elements of second array from user using inputArray Function
    printf("Enter Elements of second array \n");
    inputArray(arr2 , arrSize);
    //Printing elements of 2 array before swapping using outputArray Function
    printf("Before Swapping\n");
    outputArray(arr1 , arrSize);
    outputArray(arr2 , arrSize);
    //calling swapArray Function to swap elements
    swapArray(arr1 , arr2 , Temparray , arrSize);
    //Printing elements of 2 array after swapping using outputArray Function
    printf("After Swapping\n");
    outputArray(arr1 , arrSize);
    outputArray(arr2 , arrSize);

    return 0;
}
//function to input elements of an array from user
void inputArray(int *arrPtr ,int size)
{
    int i = 0;
    while(i < size)
    {
        scanf("%d",arrPtr++);
        i++;

    }printf("\n");


}
//function to swap 2 arrays
void swapArray(int *arrPtr1 , int *arrPtr2 , int *tempPtr, int size)
{
    int i = 0;
    while(i < size)
    {
        *tempPtr = *arrPtr1 ;
        *arrPtr1 = *arrPtr2 ;
        *arrPtr2 = *tempPtr ;
        tempPtr++;
        arrPtr1++;
        arrPtr2++;
        i++;

    }printf("\n");

}
//function to print elements of array
void outputArray(int *outPtr1 , int size)
{
    int i = 0;
    printf("Array Elements: ");
    while(i < size)
    {
        printf("%d ",*outPtr1);
        outPtr1++;
        i++;
    }
    printf("\n");

}


