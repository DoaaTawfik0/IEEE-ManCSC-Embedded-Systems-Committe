//Mini_Project 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Variables to store prices of items when user choose it
    int ArduinoUno_Price=0,DcMotor_Price=0,LCD_Price=0,PIR_Price=0,FlameSensor_Price=0;
    int SoilMoisture_Price=0,Ultrasonic_Price=0,LDR_Price=0,MQ5_Price=0,LM35_Price=0;
    /*------------------------------------------------------------------------*/
//Variables to store how much user choose any item [a for arduino ,,b for DcMotor and so on]
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,k=0;
    float discount;
    /*------------------------------------------------------------------------*/
    int Shipping_Status,Order_Status;
    /*------------------------------------------------------------------------*/

    printf("Welcome to our electronics store \n\n");
    printf("Electronics List: \n");
    Items_List(); //a function to print items and their prices to the user
    printf("----------------------------------\n");
    int Items_Number,Order_Number;

    float Final_Price;
//do_While to repeat asking user about number of items until it is larger than 1
    do
    {
//Asking user to enter number of items he want to buy because at least 2 items are allowed in one order
    printf("Enter Number of Items you need:\n ");
    scanf("%d",&Items_Number);
    if(Items_Number<2)
    {
        printf("At least 2 items required for one order!!!\n");
        printf("----------------------------------\n");
    }
    else if(Items_Number>=2)
    {
//for loop to take order from user by the number of items he chose
        for(int x=1;x<=Items_Number;x++)
        {
            printf("Enter Number of Item you want to buy: ");
            scanf("%d",&Order_Number);
//Switch case to determine which item he chose depending on number of item in the list
            switch(Order_Number)
            {
//a++ to increment number of arduino that user chose
//ArduinoUno_Price variable to store price of selected Arduino
//[All cases have variable to store price of selected item]
              case 1:
              a++;
              ArduinoUno_Price+=10;
              Final_Price+=10.0;
              break;
              case 2:
              b++;
              DcMotor_Price+=15;
              Final_Price+=15.0;
              break;
              case 3:
              c++;
              LCD_Price+=5;
              Final_Price+=5.0;
              break;
              case 4:
              d++;
              PIR_Price+=7;
              Final_Price+=7.0;
              break;
              case 5:
              e++;
              FlameSensor_Price+=2;
              Final_Price+=2.0;
              break;
              case 6:
              f++;
              SoilMoisture_Price+=6;
              Final_Price+=6.0;
              break;
              case 7:
              g++;
              Ultrasonic_Price+=15;
              Final_Price+=15.0;
              break;
              case 8:
              h++;
              LDR_Price+=2;
              Final_Price+=2.0;
              break;
              case 9:
              i++;
              MQ5_Price+=8;
              Final_Price+=8.0;
              break;
              case 10:
              k++;
              LM35_Price+=1;
              Final_Price+=1.0;
              break;
              default:
              printf("can not find this item!!!!\n");
              break;
            }

        }
//if items_number is larger than 5 there is 20% discount
        if(Items_Number>5)
        {
        discount=Final_Price*.2;
        Final_Price-=discount;

        }
//user make a decision if he wants to continue or not
        printf("TO continue the order click [1] & To finish the order click [2]\n");
        scanf("%d",&Order_Status);
        if(Order_Status==1)
        {
//user make a decision if he wants Regular Shipping or Overnight Shipping to add Shipping Price
        printf("For Regular Shipping click [1] & For Overnight Shipping click [2]\n");
        scanf("%d",&Shipping_Status);
        if(Shipping_Status==1)
        {
            if(Final_Price<10)
            {
               Final_Price+=2 ;
            }
            else if(Final_Price>=10)
            {
               Final_Price+=3;
            }
        }
        else if(Shipping_Status==2)
        {
            Final_Price+=5;
        }
//printing Receipt
        printf("----------------------------------\n");
        printf("              Receipt             \n");
        printf("%d ArduinoUno =%d $\n",a,ArduinoUno_Price);
        printf("%d DcMotor =%d $\n",b,DcMotor_Price);
        printf("%d LCD =%d $\n",c,LCD_Price);
        printf("%d PIR =%d $\n",d,PIR_Price);
        printf("%d FlameSensor =%d $\n",e,FlameSensor_Price);
        printf("%d SoilMoisture =%d $\n",f,SoilMoisture_Price);
        printf("%d Ultrasonic =%d $\n",g,Ultrasonic_Price);
        printf("%d LDR =%d $\n",a,LDR_Price);
        printf("%d MQ5 =%d $\n",h,MQ5_Price);
        printf("%d LM35 =%d $\n",i,LM35_Price);
        printf("Discount=%.3f\n",discount);
        printf("Final Price is %.3f\n",Final_Price);
        }
        else if(Order_Status==2)
        {
            printf("Thank you!!!\n");
        }

    }
}while(1);

}
void Items_List()
{
    printf("1) ArduinoUno= 10$\t\t");
    printf("2) DcMotor= 15$\n");
    printf("3) LCD= 5$\t\t\t");
    printf("4) PIR= 7$\n");
    printf("5) FlameSensor= 2$\t\t");
    printf("6) SoilMoisture= 6$\n");
    printf("7) Ultrasonic= 15$\t\t");
    printf("8) LDR= 2$\n");
    printf("9) MQ-5= 8$\t\t\t");
    printf("10) LM35= 1$\n");


}
