// Write a C program to enter P, T, R and calculate Simple Interest.
#include<stdio.h>
#include<conio.h>
int main(){
	float price,time,rate,S_I;
	printf("Plese enter Amount:\n");
	scanf("%f",&price);
	printf("Please enter the number of time periods.\n");
	scanf("%f",&time);
	printf("Please enter the Interest Rate:\n");
	scanf("%f",&rate);
	S_I=price*time*rate;
	printf("The Simple Interest is =%f Rupay",S_I);
	return 0;
}