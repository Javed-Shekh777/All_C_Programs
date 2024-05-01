// Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
#include<conio.h>
void check();
int main(){
	check();
	return 0;
}
void check(){
	int num;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	if(num%2==0){
		printf("It is Even number:\n");
	}
	else 
	{
		printf("It is Odd number:\n");
	}
}