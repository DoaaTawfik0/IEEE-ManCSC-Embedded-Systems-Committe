/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(11):
....Write a C program to multiply two matrix using pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define coloumns 3
#define Rows 3
void input_Matrix(int matrix[Rows][coloumns] , int rows , int cols);
void  matrixMultiply(int matrix1[Rows][coloumns] , int matrix2[Rows][coloumns] , int rows , int cols);
int main()
{
    int Matrix_1[Rows][coloumns];
    int Matrix_2[Rows][coloumns];
    printf("Enter elements of first matrix (3*3).\n");
    input_Matrix(Matrix_1 , Rows , coloumns);
    printf("Enter elements of second matrix (3*3).\n");
    input_Matrix(Matrix_2 , Rows , coloumns);
    printf("sum of first matrix & second matrix is: \n");
    matrixMultiply(Matrix_1 , Matrix_2 , Rows , coloumns);


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
void  matrixMultiply(int matrix1[Rows][coloumns] , int matrix2[Rows][coloumns] , int rows , int cols)
{
    int row, col, i;
    int sum;
    int res[rows][coloumns];
    for (row = 0; row < Rows; row++)
    {
        for (col = 0; col < coloumns; col++)
        {
            sum = 0;

            /*
             * Find sum of product of each elements of
             * rows of first matrix and columns of second
             * matrix.
             */
            for (i = 0; i < coloumns; i++)
            {
                sum += (*(*(matrix1 + row) + i)) * (*(*(matrix2 + i) + col));
            }


            /*
             * Store sum of product of row of first matrix
             * and column of second matrix to resultant matrix.
             */
            *(*(res + row) + col) = sum;
            printf("%d ",*(*(res + row) + col));

        }
        printf("\n");
    }
}
