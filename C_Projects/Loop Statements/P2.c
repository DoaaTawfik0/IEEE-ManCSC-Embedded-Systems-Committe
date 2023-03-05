/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(2):
....Write a C program to print all natural numbers in reverse from n to 1 using for loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , i;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   printf("Natural Numbers From %d to 1 : ",number);
   for( i = number ; i >= 1 ; i-- )
   {
      printf("%d  ",i);

   }
}
