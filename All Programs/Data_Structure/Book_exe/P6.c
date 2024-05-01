/* Write a program to read an integer. Display 
the value of that integer in decimal, octal, and 
hexadecimal notation */

#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("\nPlease Enter a integer number : ");
	scanf("%d",&num);
	printf("\nInteger value in Decimal is : %d",num);
	printf("\nInteger value in Octal is : %o",num);
	printf("\nInteger value in Hexadecimal is : %X",num);
}