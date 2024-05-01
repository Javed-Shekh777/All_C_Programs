//  Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
#include<conio.h>
int main(){
	int number;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	switch(number>0){
		case 1:
			printf("It is Positive number:\n");
			break ;
		case 0:
		    printf("It is Negative number:\n");
			break ;
		default :
		    printf("It is Zero:\n");		
	}
	return 0;
}