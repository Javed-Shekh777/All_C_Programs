// Write a C program to calculate profit or loss.
#include<conio.h>
#include<stdio.h>
int main()
{
	float main_price,sell_price;
	printf("Please enter the real amount of your Object:\n");
	scanf("%f",&main_price);
	printf("Please enter the sell amount of your Object:\n");
	scanf("%f",&sell_price);
	if(main_price>sell_price){
	printf("The Total Loss of your Bussiness is=%0.4f\n",main_price-sell_price);
	}
	else if(sell_price>main_price){
	printf("The Total Profit of your Bussiness is=%0.4f\n",sell_price-main_price);
   }
   else 
   {
   	printf("No Profit And No Loss:\n");
   }

	return 0;
}