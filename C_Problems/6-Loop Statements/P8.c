/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(8):
....Write a C program to find sum of all odd numbers from 1 to n using for loop.
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
       if( i % 2 != 0)
       {
           sum += i;
       }
   }
   printf("Sum of Odd Numbers from 1 to %d is : %d",number,sum);
}
