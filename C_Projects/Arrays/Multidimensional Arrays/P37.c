/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Arrays
Problem(37):
....Write a C program to read elements in a matrix and find determinant of the given matrix.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Matrix1[2][2];//matrix one
    int sum=0,i,j;
    /* Input elements in first matrix */
    printf("Enter elements in first matrix size 2x2: \n");
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            scanf("%d",&Matrix1[i][j]);

        }
    }
int a=1,b=1;
    /*loop to find determinant of matrix*/
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
                a*=Matrix1[i][j];
            }
            else
            {
                b*=Matrix1[i][j];
            }
        }

    }
    printf("%d\n",a-b);

    return 0;
}
