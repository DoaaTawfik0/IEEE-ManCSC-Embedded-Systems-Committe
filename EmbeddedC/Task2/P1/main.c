#include <stdio.h>

double Add(double X, double Y);
double Sub(double X, double Y);
double Mul(double X, double Y);
double Div(double X, double Y);

void Function_Execute (double (*Function_Ptr)(double , double) , double , double);
int main()
{
    Function_Execute(Add , 20 , 5);
    Function_Execute(Sub , 20 , 5);
    Function_Execute(Mul , 20 , 5);
    Function_Execute(Div , 20 , 5);
  
    return 0;
}

double Add(double X, double Y)
{
    return X+Y;
}

double Sub(double X, double Y)
{
    return X-Y;
}

double Mul(double X, double Y)
{
    return X*Y;
}

double Div(double X, double Y)
{
    if(Y != 0)
      return X/Y;
}

void Function_Execute (double (*Function_Ptr)(double , double) , double X, double Y)
{
    double result = Function_Ptr(X , Y);
    printf("Result is: %.2f\n",result);
}