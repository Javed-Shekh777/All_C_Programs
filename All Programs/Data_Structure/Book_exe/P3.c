/* . Write a program to read the address of a user. Display the result by breaking it in multipl*/
#include<stdio.h>
#include<conio.h>
int main(){
	char name,fname,mo,adr,dob,sc;
	int age;
	float salary;
	printf("\n******** Please Give your Info. ****************\n");
	printf("-------------------------------------------------------");
	printf("\nPlease Enter your name : ");
	fflush(stdin);
	gets(name);
	printf("\nPlease Enter your Age : ");
	scanf("%d",&age);
	printf("\nPlease Enter your Salary : ");
	scanf("%f",&salary)
	 
	printf("\nPleae Enter your Date of Birth name : ");
	fflush(stdin);
	gets(dob);
	
	printf("\nPleae Enter your father name : ");
	fflush(stdin);
	gets(fname);
	
	printf("\nPleae Enter your Address : ");
	fflush(stdin);
	gets(adr);
	
	printf("\nPleae Enter your School/College name: ");
	fflush(stdin);
	gets(sc);
	
	printf("\nPleae Enter your Mobile number (10 character starting with ->6,7,8,9) : ");
	fflush(stdin);
	gets(mo);
	printf("\n\n\t\t\tYour Information is Displaying Here");
	 printf("\n================================================");
	 printf("\nName :            %s");
	 printf("\nDate of Birth :  %s ");
	 printf("\nYour Age :       %d ");
	 printf("\nSalary :         %f ");
	 printf("\nFather name :    %s ");
	 printf("\nAddress :        %s ");
	 printf("\nCollege name :   %s ");
	 printf("\nMobile number :  %s ");
	 
	  
	 printf("\n================================================");
}