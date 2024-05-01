// Write a C program to enter P, T, R and calculate Compound Interest.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float price,time,rate,C_I,n;
	printf("Plese enter Amount:\n");
	scanf("%f",&price);
	printf("Please enter the number of time periods.\n");
	scanf("%f",&time);
	printf("Please enter the number of times interest is compounded per time period\n");
	scanf("%f",&n);
	printf("Please enter the Interest Rate:\n");
	scanf("%f",&rate);
	C_I=price*pow((1+(rate/n)),n*time);
	printf("The Simple Interest is =%f Rupay",C_I);
	return 0;
}