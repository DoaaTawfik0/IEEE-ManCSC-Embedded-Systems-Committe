/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(16):
....Write a C program to input marks of five subjects and calculate total,average and percentage.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
	/*Vriables Decleration*/
    float mark1,mark2,mark3,mark4,mark5,total,average,percentage;
	 /*Asking user to enter five marks */
    printf("enter marks of five subjects: ");
    scanf("%f%f%f%f%f",&mark1,&mark2,&mark3,&mark4,&mark5);
	/*Calculating total mark,average & percentage*/
    total=mark1+mark2+mark3+mark4+mark5;
    average=total/5;
    percentage=average*100;
	/*OUTPUT*/
    printf("total = %.2f\n",total);
    printf("average = %.2f\n",average);
    printf("percentage = %.2f\n",percentage);

 return 0;
}
