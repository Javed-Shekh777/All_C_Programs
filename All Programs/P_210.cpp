// Write a C program to find reverse of any number using recursion.
#include<stdio.h>
int reverse(int); // Pata nhi kya huwa hai
int main(){
	int number,rev;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	rev=reverse(number);
	printf("It is reverse %d ",rev);
	return 0;
}
int reverse(int number){
	int re,sum=0;
	if(number){
		re=number%10;
		sum=sum*10+re;
		reverse(number/10);
	}
	else 
		return 0;
	return sum;
}