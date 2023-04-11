/*
C program to find diameter, circumference and area of a circle using functions
*/
#include <stdio.h>
#include <stdlib.h>
//functions decleration
double Diameter(double);
double Circumference(double);
double Area(double);
//pi value
const float PI=3.14;
int main()
{

   float radius,diameter,circumference,area;
//asking user to enter radius
   printf("Enter radius of circle: ");
   scanf("%f",&radius);
//calling functions
   diameter=Diameter(radius);
   circumference=Circumference(radius);
   area=Area(radius);
//printinf values that return from functions
   printf("Diameter of circle= %0.2f units\n",diameter);
   printf("Circumference of circle= %.2f units\n",circumference);
   printf("Area of circle= %0.2f sq.units\n",area);

   return 0;
}
//function to calculate Diameter of circle
double Diameter(double radius)
{
   double Diameter=2*radius;
   return Diameter;
}
//function to calculate Circumference of circle
double Circumference(double radius)
{

    double Circumference=(2*PI*radius);
    return Circumference;
}
//function to calculate Area of circle
double Area(double radius)
{
    double Area=(PI*radius*radius);
    return Area;
}
