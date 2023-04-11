/* 
 C program to find maximum and minimum between two numbers using functions
*/

#include <stdio.h>
#include <stdlib.h>
//functions decleration
int max(int,int);
int min(int,int);
int main()
{
 int Number1,Number2,Max,Min;
//asking user to enter 2 numbers
 printf("Enter two Numbers: ");
 scanf("%d %d",&Number1,&Number2);
//calling functions
 Max=max(Number1,Number2);
 Min=min(Number1,Number2);
//printing values of max & min number
 printf("Maximum = %d \n",Max);
 printf("Minimum = %d \n",Min);


   return 0;
}
//function to get max number
int max(int num1,int num2)
{
    if(num1>num2)
    return num1;
    else
    return num2;

}
//function to get min number
int min(int num1,int num2)
{
    if(num1<num2)
    return num1;
    else
    return num2;

}
