/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(4):
....Write a C program to print all even numbers from 1 to n using for loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , i;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   printf("Even Numbers From 1 to %d are : ",number);
   for(i = 1 ; i <= number ; i++)
   {
	   if(i % 2 == 0)
	   {
		  printf("%d  ",i);

	   }
   }
}
