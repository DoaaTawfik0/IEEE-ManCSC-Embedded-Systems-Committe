/*
C program to find cube of any number using function
 */
#include <stdio.h>
#include <stdlib.h>
//function decleration
int cube(int);
int main()
{
    int Number;
    printf("Enter Number: ");
    scanf("%d",&Number);
    printf("cube of %d is: %d",Number,cube(Number));


    return 0;
}
//function to calculate cube of any number
int cube(int Number)
{
    return (Number*Number*Number);
}
