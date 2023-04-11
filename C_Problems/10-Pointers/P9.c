/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(9):
....Write a C program to input and print elements of a two dimensional array using pointers and functions.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define coloumns 3
#define row 3
void input_Arrray(int matrix[row][coloumns] , int rows , int cols);
void print_Arrray(int matrix[row][coloumns] , int rows , int cols);
int main()
{
    int Array[row][coloumns];

    printf("Enter elements of 3*3 matrix\n");
    input_Arrray(Array , row , coloumns);
    printf("\n");
    printf("Elements of matrix.\n");
    print_Arrray(Array , row , coloumns);

    return 0;
}
//function to input elements of matrix
void input_Arrray(int matrix[row][coloumns] , int rows , int cols)
{
    for(int i = 0 ;i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

//function to print elements of matrix
void print_Arrray(int matrix[row][coloumns] , int rows , int cols)
{
    for(int i = 0 ;i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            printf("%d  ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}
