#include <stdio.h>
  int main()
  {
    /*
     C program to set the nth bit of a number
    */
    int number, n, NewNumber;

    // Input number from user
    printf("Enter number: ");
    scanf("%d", &number);

    // Input bit position
    printf("Enter nth bit to set : ");
    scanf("%d", &n);

    // left shift 1, n times and perform bitwise OR with Number
    NewNumber=(1<<n)|number;

    printf("The new number is %d",NewNumber);

    return 0;
  }
