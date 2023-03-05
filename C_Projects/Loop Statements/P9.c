/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(9):
....Write a C program to input a number from user and print multiplication table of the given number using for loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , i ;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   printf("Multiplication Table of %d is : \n",number);
   for(i = 1 ; i <= 12 ; i++)
   {
       printf("%d * %d = %d\n",number,i,(number*i));
   }

}
