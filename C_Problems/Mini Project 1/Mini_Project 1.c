#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Items_Number,Item_Price,Shipping_Status,Order_Status;
    float Total_Price,Discount;
    char Item_Name[30];
/*first i used do while to print Enter number of items
at least once and made it infinite...
*/
    do
    {
    printf("Enter Number of items you need: ");
    scanf("%d",&Items_Number);
    if(Items_Number<2)
    {
/*if number of items is less than 2 a message will appear to user
that he needs to enter more than 2 items and then asked him again for number of items
*/
        printf("At Least Two Items in one order !!\n");
        printf("-----------------------------------\n");
    }
    else if(Items_Number>=2)
    {
/*if number of items is more than 2 user will be asked
to enter each item information (name & price)
*/
        for (int x=1;x<=Items_Number;x++)
        {
//i made a for loop to take item's name and price from the user [number of items_number]
            printf("Enter Item name: \n");
            scanf("%s",&Item_Name);
            printf("Enter price of the item: \n");
            scanf("%d",&Item_Price);
            Total_Price+=Item_Price;

        }
//if numer of items is bigger than 5 there is a 20% discount
        if(Items_Number>5)
        {
            Discount=Total_Price*0.2;
            printf("Discount = %.2f\n",Discount);
            Total_Price=Total_Price-Discount;

        }

        printf("For Regular Shipping click[1] & For overnight shipping click[2]\n");
        scanf("%d",&Shipping_Status);
        printf("To continue The Order click[1] & To Finish The Order click[2]\n");
        scanf("%d",&Order_Status);
/*i made a for loop here so if user wants to finish his order i can
break from this loop after calculating total price by adding shipping tips
*/
     for(int x=2;x==1||x==2;x++)
     {
         if(x==Order_Status)
         {
           if(Shipping_Status==1)
           {
            if(Total_Price<10)
            {
                Total_Price+=2;
            }
            else if(Total_Price>=10)
            {
                Total_Price+=3;
            }
           }
           else if(Shipping_Status==2)
           {
             Total_Price+=5;
           }
          printf("Thank You!!\n");
          break;
         }
     }
/*if user wants to continue his order [click 1]total price
will be calculated by adding shipping tips
*/
     if(Order_Status==1)
     {
        if(Shipping_Status==1)
        {
          if(Total_Price<10)
          {
            Total_Price+=2;
          }
            else if(Total_Price>=10)
          {
                Total_Price+=3;
          }
        }
        else if(Shipping_Status==2)
        {
             Total_Price+=5;
        }

    }
    printf("-----------------------------------------------------------\n");
    printf("Total Price = %.2f\n",Total_Price);
    break;
    }
}while(1);
    return 0;
}