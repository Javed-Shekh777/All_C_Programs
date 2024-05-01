//  Write a C program to enter temperature in Fahrenheit and convert to Celsius.
#include<conio.h>
#include<stdio.h>
int main()
{
	float celsius,Fahrenheit;
	printf("Please enter the temperature in Celsius:\n");
	scanf("%f",&Fahrenheit);
	celsius=5*(Fahrenheit-32)/9;
	printf("The Temperature in Celsius is=%f Dagree Celsius\n",celsius);
	return 0;
}