// Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
int repallindrome(int);
int main(){
	int number,x;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	x=repallindrome(number);
	if(number==x){
		printf("It is Pa\n");
	}
	return 0;
}
int repallindrome(int number){
	int re,sum=0,flag;
		if(number>0){
			re=number%10;
			sum=sum*10+re;
			repallindrome(number/10);
		}
		else {
			return 0;
		}
		return sum;
		
	
}