/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(9):
....Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    float Centigrade,Fahrenheit;
    /*Asking User to Enter temperature in Fahrenheit*/
    printf("Enter temperature in Fahrenheit : ");
    scanf(" %f",&Fahrenheit);
    /*Finding temperature in Fahrenheit*/
    Centigrade=(Fahrenheit-32)*5/9;
    /*OUTPUT*/
    printf("-----------------------------------\n");
    printf("temperature in Fahrenheit= %.2f Fahrenheit\n",Fahrenheit);
    printf("temperature in Centigrade= %.2f Celsius\n",Centigrade);

    return 0;
}
