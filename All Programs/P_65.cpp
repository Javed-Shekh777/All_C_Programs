// Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
#include<conio.h>
int main(){
	int number,fd,ld,sum=0;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	ld=number%10;
	fd=number;
	while(fd>=10){
		fd=fd/10;
	}
	printf("The Sum of first and last digit of a number is=%d",fd+ld);
	return 0;
}