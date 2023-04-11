/* 
  C program to print even or odd numbers in given range using recursion
*/
#include <stdio.h>
#include <math.h>
//function decleration
int Even_Odd(int);
int main()
{
 int upper;
//asking user to enter upper interval
 scanf("%d",&upper);
//for loop to check every number in interval
 for(int i=1;i<=upper;i++)
 {
     int x=Even_Odd(i);
     if(x%2==0)
     {
         printf("%d is even\n",i);
     }
     else
        {
         printf("%d is odd\n",i);
     }
 }


   return 0;
}
//recursive function to check if number is even or odd
int Even_Odd(int number)
{
    if(number==1)
    {
        return 1;
    }
    else
    {
      return (1 + Even_Odd(number-1));

    }


}


