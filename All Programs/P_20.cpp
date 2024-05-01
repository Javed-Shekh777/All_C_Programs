// Write a C program to input basic salary of an employee and calculate its gross salary according to following:
/* Basic salary <= 10000 :
          Hra = 20%, DA = 80%: yani Hra=20*10000/100=2000; DA=80*10000/100=8000;
    Basic salary <=20000 :
          HRA = 25%, DA = 90% : yani Hra=25*20000/100=5000; DA=90*20000/100=18000
    Basic salary > 2000: 
	      HRA = 30%, DA = 95% */
#include<conio.h>
#include<stdio.h>
int main()
{
	float gross_salary,HRA ,DA,basic_salary;
	printf("Please enter the basic salary of an employee:\n");
	scanf("%f",&basic_salary);
	if(basic_salary<=10000){
		HRA=basic_salary*0.2;
		DA=0.8*basic_salary;
	}
	else if(basic_salary<=20000){
		HRA=0.25*basic_salary;
		DA=0.9*basic_salary;
	}
	else{
		HRA=0.3*basic_salary;
		DA=0.95*basic_salary;
			}
			gross_salary=basic_salary+HRA+DA;
		printf("The total Gross Salary of an Employee is =%f",gross_salary);
	return 0;
}