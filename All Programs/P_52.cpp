// Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
#include<conio.h>
int main(){
	int choice,a,b;;
	printf("Please read carefully given below list and choose number to enter....:\n");
	printf("Please enter for Addition: = 1\n");
	printf("Please enter for Substraction: = 2\n");
	printf("Please enter for Multiplication: = 3\n");
	printf("Please enter for Division: = 4\n");
	printf("\nPlease enter your choice:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("PLease enter two number for addition:\n");
			scanf("%d%d",&a,&b);
			printf("The addition of %d and %d is =%d",a,b,a+b);
			break ;
		case 2:
		    printf("PLease enter two number for substraction:\n");
			scanf("%d%d",&a,&b);
			printf("The addition of %d and %d is =%d",a,b,a-b);
			break ;	
		case 3:
		    printf("PLease enter two number for multiply:\n");
			scanf("%d%d",&a,&b);
			printf("The addition of %d and %d is =%d",a,b,a*b);
			break ;
		case 4:
		    printf("PLease enter two number for division:\n");
			scanf("%d%d",&a,&b);
			printf("The addition of %d and %d is =%d",a,b,a/b);
			break ;		
		default :
		    printf("Sorry ! You have entered wrong number:\n");	
    }
	return 0;
		    
}