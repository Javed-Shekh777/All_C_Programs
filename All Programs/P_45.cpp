// Write a C program to print day of week name using switch case.
#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Please Enter a number between(1 to 7):\n");
	scanf("%d",&number);
	switch(number){
		case 1:
			printf("It is Monday : \n And, I have Nice Day !\n");
			break ;
		case 2:
		    printf("It is Tuesday : \n And, I have Nice Day !\n");
			break ;
		case 3:
		    printf("It is Wednesday : \n And, I have Nice Day !\n");
			break ;
		case 4:
		    printf("It is Thursday : \n And, I have Nice Day !\n");
		    break ;
		case 5:
		    printf("It is Friday : \n And, I have Nice Day !\n");
		    break ;
		case 6:
		    printf("It is Saturday : \n And, I have Nice Day !\n");
			break ;
		case 7:
		    printf("It is Sunday : \n And, I have Nice Day !\n");
			break  ;
		default : 
		    printf("You Entered Wrong number:\n");						
	};
	return 0;
}