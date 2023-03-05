#include <stdio.h>
#include <math.h>
//functions decleration
int digits(int);
int isArmstrong(int);
int main()
{
   int lowerLimit,upperLimit;
//asking user for lower and upper limit
   printf("Entert lower limit: ");
   scanf("%d",&lowerLimit);
   printf("Entert upper limit: ");
   scanf("%d",&upperLimit);
   printf("Armstrong numbers between %d & %d are:\n",lowerLimit,upperLimit);
//for loop to check numbers between two intervals
   for(int i=lowerLimit;i<=upperLimit;i++)
   {
//calling isArmstrong() function
       int armstrongCheck=isArmstrong(i);
//if return value of func==i then the number must be printed as it is armstrong number
       if(armstrongCheck==i)
       {
           printf("%d\n",i);
       }


   }
   return 0;
}
//function to check if number is armstrong or not
int isArmstrong(int number)
{
    int Each_Digit,sum=0;
    int Digits= digits(number);
    while(number>0)
    {
        Each_Digit=number%10;
        sum=sum+pow(Each_Digit,Digits);
        number=number/10;
    }
    return sum;

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



