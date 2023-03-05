/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(8):
....Write a C program to input elements in array and search an element in array using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 //max size of array
void inputArray(int *arrPtr ,int size);
void search(int *arrPtr , int *Number , int size);

int main()
{
    int Arr[MAXSIZE] ;
    int arrSize , searchNum; //Normal Variables
    int *searchPtr = &searchNum; //pointer to an integer
    //Input size of array from user
    printf("Enter size of array: ");
    scanf("%d",&arrSize);
    inputArray(Arr , arrSize);

    //Input Element to search
    printf("Input Element to search: ");
    scanf("%d",&searchNum);
    //calling search function to find specific element
    search(Arr , searchPtr , arrSize);

    return 0;
}
//function to input elements of an array from user
void inputArray(int *arrPtr ,int size)
{
    printf("Enter Elements of array: \n");
    int i = 0;
    while(i < size)
    {
        scanf("%d",arrPtr++);
        i++;

    }printf("\n");


}

//function to search an element in array
void search(int *arrPtr , int *Number , int size)
{
    int i ;
    int flag = 1 ;
    for(i = 0 ; i < size ; i++)
    {
        if(*Number == *arrPtr)
        {
            flag = 1;
            break;
        }
        else
        {
            arrPtr++;
            flag = 0;
        }
    }
    if(flag == 1) printf("%d is found at %d position.", *Number, ++i);
    else  printf("%d does not exists in array.", *Number);
}


