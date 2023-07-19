#include <stdio.h>

int Array_Sum(int *Array_Ptr , int Array_Size);
void Scan_Array(int *Array_Ptr , int Array_Size)

int Sum , iterator;

int main()
{
    int Array_Size ;
    //Scaning Size Of Array
    printf("Enter Size of Array: ");
    scanf("%d",&Array_Size);
    
    int array[Array_Size];
    //Scaning Elements of array
    Scan_Array(array , Array_Size);
    //Getting Sum Of Elements
    Sum = Array_Sum(array , Array_Size);
    printf("%d\n", Sum);
    printf("-------------------");
    return 0;
}
void Scan_Array(int *Array_Ptr , int Array_Size)
{
    printf("Enter Elements: \n");
    for(iterator = 0 ; iterator < Array_Size ; iterator++)
    {
      scanf("%d",Array_Ptr+iterator);
    }
    
}
int Array_Sum(int *Array_Ptr , int Array_Size)
{
    Sum = 0;
    for(iterator = 0 ; iterator < Array_Size ; iterator++)
    {
      Sum += *(Array_Ptr+iterator);
    }
    return Sum;
    
}