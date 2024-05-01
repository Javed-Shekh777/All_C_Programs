// Write a C program to calculate sum of digits of a number.
#include<stdio.h>
#include<conio.h>
int main(){
	int number,sum=0,re;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	while(number!=0){
		re=number%10;
		sum=sum+re;
		number=number/10;
	}
	printf("The Sum of all digits of numbers is=%d\n",sum);
}