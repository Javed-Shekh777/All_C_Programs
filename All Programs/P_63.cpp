// Write a C program to count number of digits in a number.
#include<stdio.h>
#include<conio.h>
int main(){
	int re,number,count,digit=0;
	printf("Please enter the number:\n");
	scanf("%d",&number);
	while(number!=0){
		digit++;
		number=number/10;
	}
	printf("The no of digits in given number is =%d",digit);
	return 0;
}