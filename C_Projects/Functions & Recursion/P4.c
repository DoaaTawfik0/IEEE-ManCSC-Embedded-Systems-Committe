/*
  C program to check even or odd using functions
*/
#include <stdio.h>
#include <stdlib.h>
//function decleration
int isEven(int);
int main()
{
    int value,number;
//asking user to enter number
    printf("Enter any number: ");
    scanf("%d",&number);
//calling function
    value=isEven(number);
/*if remainder equals to 0 then number is even
else number is odd
*/
    if(value==0)
    {
        printf("%d is even \n",number);
    }
    else if(value!=0)
    {
        printf("%d is odd \n",number);
    }

   return 0;
}
// function to get remainder of dividing a number by 2
int isEven(int number)
{
    return (number%2);

}
