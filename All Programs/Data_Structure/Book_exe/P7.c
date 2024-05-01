/* Write a program that prints a floating point 
value in exponential format with the following 
specifications:
(a) correct to two decimal places;
(b) correct to four decimal places; and
(c) correct to eight decimal places. */

#include<stdio.h>
#include<conio.h>
int main(){
	float num;
	printf("\nPlease Enter a number in Floating :");
	scanf("%e",&num);
	printf("\nNumber is 2 places : %0.2f",num);
	printf("\nNumber is 4 places : %0.4f",num);
	printf("\nNumber is 8 places : %0.8f",num);
}