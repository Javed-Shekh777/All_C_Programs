//  Write a C program to check whether a number is Armstrong number or not.
/*
In the case of an Armstrong number of 3 digits, 
the sum of cubes of each digit is equal to 
the number itself.
 For example, 153 is an Armstrong number because 
 Enter a three-digit integer: 371 371 is an Armstrong number.
*/
#include<stdio.h>
#include<conio.h>
int main(){
	int num,armstr=0,re,temp;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		re=num%10;
		armstr=armstr+re*re*re;
		num=num/10;
	}
	if(temp==armstr){
		printf("It is Armstrong Number:\n");
	}
	else 
	{
		printf("It is Not Armstrong Number:\n");
	}
	return 0;
}