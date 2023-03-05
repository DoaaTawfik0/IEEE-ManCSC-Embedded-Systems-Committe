#include <stdio.h>
  int main()
  {
 /*
   C program to create Simple Calculator using switch case
 */

    float Number1,Number2,Result;
    char operation;
    printf("Enter Number1: ");
    scanf("%f",&Number1);
    printf("Enter Number2: ");
    scanf("%f",Number2);
    printf("Enter operation: ");
    scanf("%c",&operation);
    switch(operation)
    {
       case '+':
       Result=(Number1+Number2);
       break;
       case '-':
       Result=(Number1-Number2);
       break;
       case '*':
       Result=(Number1*Number2);
       break;
       case '/':
       Result=(Number1/Number2);
       break;
       default:
       printf("Invalid operator");
    }
    printf("%f",Result);

   return 0;
  }
  //there is a problem when i ask user to input operation????????

