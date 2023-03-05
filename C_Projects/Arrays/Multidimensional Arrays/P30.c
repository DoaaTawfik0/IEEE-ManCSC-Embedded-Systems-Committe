/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(30):
....Write a C program to read elements in a matrix and find the sum of elements of each row and columns of matrix.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Matrix1[3][3];//matrix one
    int sum=0,i,j;
    /* Input elements in first matrix */
    printf("Enter elements in first matrix size 3x3: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&Matrix1[i][j]);

        }
    }

    /*loop to find sum of each row*/
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum+=Matrix1[i][j];
        }
        printf("Sum of Row %d is %d\n",i+1,sum);
        sum=0;
    }
    /*loop to find sum of each column*/
    for( j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            sum+=Matrix1[i][j];
        }
        printf("Sum of column %d is %d\n",i+1,sum);
        sum=0;
    }

    return 0;
}
