
#include <stdio.h>
#include <stdlib.h>
//function decleration
int isPrime(int);
int main()
{
   int lowerLimit,upperLimit;
//asking user for lower and upper limit
   printf("Entert lower limit: ");
   scanf("%d",&lowerLimit);
   printf("Entert upper limit: ");
   scanf("%d",&upperLimit);
   printf("Prime numbers between %d & %d are:\n",lowerLimit,upperLimit);
//for loop to check numbers between two intervals
   for(int i=lowerLimit;i<=upperLimit;i++)
   {
//calling isPrime() function
       int primeCheck=isPrime(i);
//if return value of func==1 then the number must be printed as it is prime number
       if(primeCheck==1)
       {
           printf("%d\n",i);
       }


   }
   return 0;
}
//function to check number is prime or not
isPrime(int number)
{
    int prime=1;//flag variable
    for(int i=2;i<=number/2;i++)
    {
/*if remaider equals to 0 then number is not prime
 so i change flag variable to zero
*/
        if(number%i==0)
        {
            prime=0;
            return 0;
            break;
        }

    }
/*if flag variable still equal 1 and number is greater than 1
 so its a prime number
*/
    if(prime==1&&number>1)
    {
        return 1;
    }
}


