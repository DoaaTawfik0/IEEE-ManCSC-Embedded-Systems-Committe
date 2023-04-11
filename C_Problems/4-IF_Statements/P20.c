/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(20):
....Write a C program to enter basic salary and calculate gross salary of an employee.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    float Salary;
    float HRA=0,DA=0,Gross=0;
    /*Asking User to enter Basic Salary*/
    printf("Enter basic salary of an employee: ");
    scanf("%f", &Salary);
    /*Implementing IF Else to calculate gross salary of an employee.*/
    if (Salary <= 10000)
    {
        HRA = 0.2 * Salary;
        DA = 0.8 * Salary;
    }
    else if (Salary>10001 && Salary <=20000)
    {
        HRA = 0.25 * Salary;
        DA = 0.9 * Salary;
    }
    else
    {
        HRA = 0.3 * Salary;
        DA = 0.95 * Salary;
    }
    Gross = Salary + HRA + DA;
    /*OUTPUT*/
    printf("GROSS SALARY OF EMPLOYEE = %.2f", Gross);
    return 0;
}
