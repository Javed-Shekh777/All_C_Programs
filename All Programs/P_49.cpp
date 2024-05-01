//  Write a C program to check whether a number is even or odd using switch case.
#include<conio.h>
#include<stdio.h>
int main(){
	int number;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	switch(number%2==0){
		case 1:
			printf("This number %d is EVEN:\n",number);
			break ;
		default :
		    printf("This number %d is ODD:\n",number);	
	}
	return 0;
}