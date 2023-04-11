/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(7):
....Write a C program to input elements in an array and reverse the array using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //max size of array
void inputArray(int *arrPtr ,int size);
void reverseArray(int *arrPtr1 , int *arrPtr2 , int size);
void outputArray(int *outPtr1 , int size);


int main()
{
    int Arr[MAXSIZE] , reversedArr[MAXSIZE];
    int arrSize  ; //Normal Variables
    int *endPtr;

    //Input size of array from user
    printf("Enter size of array: ");
    scanf("%d",&arrSize);

    endPtr = Arr+(arrSize-1); //pointer to last element in array

    //Input elements of array from user using inputArray Function
    printf("Enter Elements of array \n");
    inputArray(Arr , arrSize);
    //Printing elements of array before reversing it using outputArray Function
    printf("Before Reversing\n");
    outputArray(Arr , arrSize);
    //calling reverseArray Function to Reverse elements
    reverseArray(endPtr, reversedArr , arrSize);
    //Printing elements of array after reversing using outputArray Function
    printf("After Reversing\n");
    outputArray(reversedArr , arrSize);


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
//function to find reverse of any array
void reverseArray(int *OrgPtr , int *RevPtr , int size)
{
   //OrgPtr represents address of last element in original array
    for(int i = 0 ; i < size ; i++)
    {
        *RevPtr = *OrgPtr;
        RevPtr++;
        OrgPtr--;

    }


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


