//  Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include<conio.h>
#include<stdio.h>
int main()
{
	float celsius,Fahrenheit;
	printf("Please enter the temperature in Celsius:\n");
	scanf("%f",&celsius);
	Fahrenheit=32+(9*celsius/5);
	printf("The Temperature in Fahrenheit is=%f Fahrenheit\n",Fahrenheit);
	return 0;
}