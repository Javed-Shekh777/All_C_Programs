// Simplr database management system.
#include<stdio.h>
#include<conio.h>
void addstudent();
void studentrecord();
void searchstudent();
void Delete();

struct student {
	char first_name[20];
	char last_name[20];
	char Class[10];
	int roll_no;
     
	char vill[50];
	float per;
};


int main()
{
	int choice;
	while(choice!=5){
		printf("\n\t\t\t========= STUDENT DATABASE MANAGEMENT SYSTEM ========");
		printf("\n\n\n\t\t\t    1. Add Student Record\n");
		printf("\t\t\t    2. Student Records\n");
		printf("\t\t\t    3. Search Student\n");
		printf("\t\t\t    4. Delete Record\n");
		printf("\t\t\t    5. Exit\n");
		printf("\t\t\t_________________________________________________________\n");
		printf("\t\t\t\t   ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
			 
				addstudent();
				 
				break;
		}
	}
}

void addstudent(){
	char another;
	FILE *fp;
	struct student info;
	 do{
	 	printf("\t\t\t\t=======Add Student Info ===========\n\n\n");
	 	fp=fopen("student_info.txt","a");
	 	printf("\n\t\t\t\t Enter First Name : ");
	 	scanf("%s",&info.first_name);
	 	printf("\n\t\t\t\t Enter Last Name  : ");
	 	scanf("%s",&info.last_name);
	 	printf("\n\t\t\t\t Enter Roll no    : ");
	 	scanf("%s",&info.roll_no);
	 	printf("\n\t\t\t\t Enter Class      : ");
	 	fflush(stdin);
	 	scanf("%s",&info.Class);
	 	fflush(stdin);
	 	printf("\n\t\t\t\t Enter Address    : ");
	 	fflush(stdin);
	 	scanf("%s",&info.vill);
	 	fflush(stdin);
	 	printf("\n\t\t\t\t Enter Percentage : ");
	 	fflush(stdin);
	 	scanf("%s",&info.per);
	 	fflush(stdin);
	 	printf("\n\t\t\t\t..................................................\n");
	 	
	 	if(fp==NULL){
	 		printf("\t\t\tCannot open file\n");
		 }
		 else {
		 	printf("\n\t\tRecord stored successfully\n");
		 }
	 	
	 	fwrite(&info,sizeof(struct student),1,fp);
	 	fclose(fp);
	 	
	 	printf("\t\t\t Do you want to add another record?\n : ");
	 	scanf("%s",&another);
	 }while(1);
}









































































