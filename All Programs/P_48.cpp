//  Write a C program to find maximum between two numbers using switch case.
#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2;
	printf("Please enter two number:\n");
	scanf("%d%d",&num1,&num2);
	switch(num1>num2){
		case 1:
			printf("The Greatest number between %d and %d is =%d",num1,num2,num1);
			break ;
		default :
		    printf("The Greatest number between %d and %d is =%d",num1,num2,num2);	
	}
	return 0;
}