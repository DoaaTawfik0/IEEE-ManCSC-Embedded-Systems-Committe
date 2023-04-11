/*
 C program to check palindrome number using recursion
 */
#include <stdio.h>
#include <math.h>
//function decleration
int ispalindrome(int);
int reverse(int);
int digits(int);
int main()
{
 int number;
 printf("Enter any number: ");
 scanf("%d",&number);
 int check=ispalindrome(number);
 if(check==1)
 {
     printf("number %d is palindrome\n",number);
 }
 else
    printf("number %d is not palindrome\n",number);

   return 0;
}
//function to check if number is palindrome or not
int ispalindrome(int number)
{
    if(number==reverse(number))
    {
        return 1;
    }
    else
    return 0;
}
//recursive fun to get reverse
int reverse(int num)
{
    /* Find number of digits in num */
    int digit = digits(num);
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
//function to calculate digits of number
int digits(int number)
{
    int digits=0;
    while(number>0)
    {
        digits++;
        number=number/10;
    }
    return digits;
}


//when i use function difits ouput is wrong