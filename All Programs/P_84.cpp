// Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
#include<conio.h>
int main(){
	int perfect,i,num,sum=0,flag;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	flag=num;
	for(i=1;i<=num/2;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(flag==sum){
		printf("It is Perfect Number:\n");
	}
	else 
	{
		printf("It is Not Perfect Number:\n");
	}
	return 0;
}