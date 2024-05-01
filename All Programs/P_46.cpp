// Write a C program print total number of days in a month using switch case.
#include<stdio.h>
#include<conio.h>
int main(){
	int month;
	printf("PLease Enter the Month number:\n");
	scanf("%d",&month);
	switch(month){
		case 1:
			printf("This Month is JANUARY:\n Welcome to you in this month!\n");
			break ;
		case 2:
			printf("This Month is FEBUARY:\n Welcome to you in this month!\n");
			break ;
		case 3:
			printf("This Month is MARCH:\n Welcome to you in this month!\n");
			break ;
		case 4:
			printf("This Month is APRIL:\n Welcome to you in this month!\n");
			break ;
		case 5:
			printf("This Month is MAY:\n Welcome to you in this month!\n");
			break ;
		case 6:
			printf("This Month is JUNE:\n Welcome to you in this month!\n");
			break ;
		case 7:
			printf("This Month is JULY:\n Welcome to you in this month!\n");
			break ;
		case 8:
			printf("This Month is AUGUST:\n Welcome to you in this month!\n");
			break ;
		case 9:
			printf("This Month is SEPTEMBER:\n Welcome to you in this month!\n");
			break ;
		case 10:
			printf("This Month is OCTOBER:\n Welcome to you in this month!\n");
			break ;
		case 11:
			printf("This Month is NOVEMBER:\n Welcome to you in this month!\n");
			break ;
		case 12:
			printf("This Month is DECEMBER:\n Welcome to you in this month!\n");
			break ;
		default :
			printf("Ypu are entered wrong number:\n Please enter Right number:\n");
				}
				return 0;
}