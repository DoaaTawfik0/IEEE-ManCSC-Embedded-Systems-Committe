/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(5):
....Write a C program to print all odd numbers from 1 to n using for loop. 
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , i;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   printf("Odd Numbers From 1 to %d are : ",number);
   for(i = 1 ; i <= number ; i++)
   {
	   if(i % 2 != 0)
	   {
		  printf("%d  ",i);

	   }
   }
}
