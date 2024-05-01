#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fe;
	int id;
	char name[30];
	float salary;
	fe=fopen("emp.txt","w+");
	if(fe==NULL){
		printf("SORRY ! File does not exists \n");
	 
	}
	printf("\nEnter the Id : ");
	scanf("%d",&id);
	fprintf(fe,"Id = %d\n",id);
	printf("\nEnter the Name : ");
	scanf("%s",name);
	fprintf(fe,"Name = %s\n",name);
	printf("\n Enter the salary : ");
	scanf("%f",&salary);
	fprintf(fe,"Salary = %0.2f",salary);
	fclose(fe);
}