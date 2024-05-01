//  Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
#include<conio.h>
int main(){
	int number,i,flag=1;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	for(i=2;i<number;i++){
		if(number%i==0){
			flag=0;
		}
	}
	if(flag==1){
		printf("It is Prime Number:\n");
	}
	else {
		printf("It is Not Prime Number:\n");
	}
	return 0;
}