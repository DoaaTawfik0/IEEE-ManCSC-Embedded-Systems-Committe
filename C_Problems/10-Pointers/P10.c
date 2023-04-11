/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(10):
....Write a C program to add two matrix using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define coloumns 3
#define Rows 3
void input_Matrix(int matrix[Rows][coloumns] , int rows , int cols);
void matrixAdd(int matrix1[Rows][coloumns] , int matrix2[Rows][coloumns] , int rows , int cols);
int main()
{
    int Matrix_1[Rows][coloumns];
    int Matrix_2[Rows][coloumns];
    printf("Enter elements of first matrix (3*3).\n");
    input_Matrix(Matrix_1 , Rows , coloumns);
    printf("Enter elements of second matrix (3*3).\n");
    input_Matrix(Matrix_2 , Rows , coloumns);
    printf("sum of first matrix & second matrix is: \n");
    matrixAdd(Matrix_1 , Matrix_2 , Rows , coloumns);


    return 0;
}
//function to input elements of matrix
void input_Matrix(int matrix[Rows][coloumns] , int rows , int cols)
{
    for(int i = 0 ;i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

//function to add 2 matrix 
void matrixAdd(int matrix1[Rows][coloumns] , int matrix2[Rows][coloumns] , int rows , int cols)
{
    int sum_Matrix[rows][cols];
    for(int i = 0 ;i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            sum_Matrix[i][j]= *(*(matrix1+ i) + j) + *(*(matrix2 + i) + j) ;
            printf("%d  ", *(*(sum_Matrix + i) + j));
        }
        printf("\n");
    }
}
