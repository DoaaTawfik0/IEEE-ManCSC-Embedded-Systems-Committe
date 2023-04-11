/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(13):
....Write a C program to input a number from user and swap first and last digit of the given number.
----------------------------------------------------------------------------------------------------
*/
//ERROR ........this code works only for 5 digits
#include <stdio.h>
#include <math.h>
int main()
{
   int number , Exnumber , digit , counter = 1 , firstDigit , lastDigit , swappedNum = 0 , temp;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   Exnumber = number;
   firstDigit = number % 10;//to get first digit
   number /= 10;//to remove digit

   while(number > 0)
   {
     lastDigit = number % 10;//to get last digit
     number /= 10;
     counter++;
   }
   swappedNum = firstDigit * pow(10,counter-1) + lastDigit ;//number(12345)
   //(5*10^4)+1 = 50001

   Exnumber /= 10;//to remove first digit
   while(Exnumber > 0)
   {
       digit = Exnumber % 10;
       Exnumber /= 10;
       if(Exnumber == 0)
       {
           break ;
       }

       swappedNum += digit * pow(10,(counter-4));
       counter++;


   }
 printf("%d",swappedNum);
}
