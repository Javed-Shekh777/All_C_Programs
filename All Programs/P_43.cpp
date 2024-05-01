// Write a C program to check whether year is leap year or not using conditional operator.
#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("Please enter a number:\n");
	scanf("%d",&year);
	(year%4==0)?printf("This year %d is LEAP Year:\n",year)
	:printf("This year %d is Not LEAP Year:\n",year);
	return 0;
}