#include <stdio.h>
  int main()
  {  
    /*
     C program to get the nth bit of a number
    */
    int number, n, bitStatus;

    // Input number from user
    printf("Enter number: ");
    scanf("%d", &number);

    // Input bit position
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    // Right shift number, n times and perform bitwise AND with 1
    bitStatus = (number >> n) & 1;

    printf("The %d bit is set to %d", n, bitStatus);

    return 0;
  }
