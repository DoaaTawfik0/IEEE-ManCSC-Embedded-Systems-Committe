/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(24):
....Write a C program to read elements in two matrices and find the difference of two matrices.
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
    /*Subtract 2 Matrix*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Matrix3[i][j]=Matrix1[i][j]-Matrix2[i][j];
        }
    }
    /*printing Matrix*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",Matrix3[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }



    return 0;
}
