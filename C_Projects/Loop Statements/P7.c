/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(7):
....Write a C program to input number from user and find sum of all even numbers between 1 to n.
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
       if( i % 2 == 0)
       {
           sum += i;
       }
   }
   printf("Sum of Even Numbers from 1 to %d is : %d",number,sum);
}
