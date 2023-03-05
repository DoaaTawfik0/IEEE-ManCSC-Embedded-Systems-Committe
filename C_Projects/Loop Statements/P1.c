/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(1):
....Write a C program to print all natural numbers from 1 to n using loop. 
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main ()
{
   int number , i;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   printf("Natural Numbers From 1 to %d : ",number);
   for( i = 1 ; i <= number ; i++ )
   {
      printf("%d  ",i);
   
   }
}