/*
  C program to find factorial of any number using recursion
 */
#include <stdio.h>
#include <math.h>
//function decleration
int fact(int);
int main()
{
    int number;
//asking user to enter number
    printf("Enter number: ");
    scanf("%d",&number);
//calling function
    int facValue=fact(number);
    printf("factorial of number %d is %d\n",number,facValue);


   return 0;
}
//recursive function to get factorial
int fact(int number)
{
    if(number==1)
    {
      return 1;//base case
    }
    else
    {
      return number*fact(number-1);//recursive procedure
    }
}
