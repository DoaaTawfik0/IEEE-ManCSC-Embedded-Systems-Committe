/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(5):
....Write a C program to copy one array elements to another array using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //max size of array
int main()
{
    int arr1[MAXSIZE] , arr2[MAXSIZE] ;
    int arrSize , i ; //Normal Variables
    int *arr1Ptr , *arr2Ptr ; //Pointers to firs element of array1 & array2
    arr1Ptr = arr1;
    arr2Ptr = arr2;
    printf("Enter Size of Array: ");
    scanf("%d",&arrSize);
    printf("Enter Array Elements: \n");
    //Taking elements of first array from user
    for(i = 0 ; i < arrSize ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    //coping elements of first array to second one
    for(i = 0 ; i < arrSize ; i++)
    {
        *arr2Ptr = *arr1Ptr;
         arr1Ptr++; //move first Pointer to next array element
         arr2Ptr++; //move second Pointer to next array element

    }

    arr1Ptr = arr1; //set pointer to first element of array1 again
    arr2Ptr = arr2; //set pointer to first element of array2 again
    //printing first array
    printf("Array1 : ");
    for(i = 0 ; i < arrSize ; i++)
    {
        printf("%d  ",*arr1Ptr);
        arr1Ptr++;
    }
    printf("\n");
    //printing second array
    printf("Array2 : ");
    for(i = 0 ; i < arrSize ; i++)
    {
        printf("%d  ",*arr2Ptr);
        arr2Ptr++;
    }

    return 0;
}


