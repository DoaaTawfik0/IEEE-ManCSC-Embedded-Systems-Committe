/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(6):
....Write a C program to find the sum of all natural numbers between 1 to n using for loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , i , sum = 0;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   for(i = 1 ; i <= number ; i++)
   {
	   sum += i;
   }
   printf("Sum of Numbers from 1 to %d is : %d",number,sum);
}
