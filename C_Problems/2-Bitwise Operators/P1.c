#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    //Write a C program to input any number from user and check whether the Least Significant Bit (LSB) of the given number is set (1) or not (0).
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number&1==1)
    {
     printf("Least Significant Bit of %d is set (1)\n",number);

    }
    else
    {
     printf("Least Significant Bit of %d is set (0)\n",number);
    }
    return 0;
}