/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(27):
....Write a C program to enter elements in two matrices and check whether both matrices are equal or not.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Matrix1[3][3];//matrix one
    int Matrix2[3][3];//matrix two
    int Matrix3[3][3];//Output

    /* Input elements in first matrix */
    printf("Enter elements in first matrix size 3x3: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&Matrix1[i][j]);

        }
    }
    /* Input elements in Second matrix */
    printf("Enter elements in Second matrix size 3x3: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf(" %d",&Matrix2[i][j]);

        }
    }
/*--------------------------------------------------*/
    /*if element in matrix1 equals element in matrix two put 1 in this position(in new matrix)*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Matrix1[i][j]==Matrix2[i][j])
            {
                Matrix3[i][j]=1;
            }
        }
    }
/*--------------------------------------------------*/
    /*loop to check if every element in matrix 3==1*/
    int x;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Matrix3[i][j]==1)
            {
                x=1;
            }
            else
                x=0;
        }
    }
    /*decide if 2 matrix are equal or not*/
    if(x==1)
    {
        printf("Both matrices are equal");
    }
    else
    {
        printf("Both matrices are not equal");
    }


    return 0;
}
