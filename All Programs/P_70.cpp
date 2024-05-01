// Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
#include<conio.h>
int main(){
	int number,pald=0,num;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	num=number;
	while(number!=0){
		pald=(pald*10)+(number%10);
		number=number/10;
	}
	if(num==pald){
		printf("This number is PALLINDROME:\n");
	}
	else {
		printf("This number is NOT PALLINDROME:\n");
	}
	return 0;
}