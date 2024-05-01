// Student Record System.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student {
	char Name[50];
	long long int Roll_no;
	char Father_name[50];
	char branch[50];
	int marks[50];
};
struct student;

void Create();
void Display();
void Append();

int main(){
	int choice;
	printf(">>>>>>>COOSE One Option >>>>>>>>>>>>>>>>>>>>\n");
	printf("\n1. Create Record.\n");
	printf("\n2. Dispaly Record.\n");
	printf("\n3. Append Record.\n");
	printf("\n4. To Exit.\n");
	printf("\n\n Enter your choice. : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			Create();
		break;
		  
	}
	 
}
void Create(){
	printf("\t\t\t<<<<<<<<<<<<<<<<< ADD STUDENT RECORD >>>>>>>>>>>>>>>>>>>>");
	int n,i,j,num;
	struct student stu;
	FILE *sfp;
	sfp = fopen("hgh.txt","w+");
	if(sfp==NULL){
		printf("\n File is not exit\n");
	}
		fwrite(&stu,sizeof(struct student),1,sfp);
	printf("\n How many Students record want to create...\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter %d student record..\n",i+1);
		printf("\n Enter Student name : ");
		fflush(stdin);
		gets(stu.Name);
			fprintf(sfp,"name is :  ",stu.Name);
	     fflush(stdin);
		 printf("\n Enter Father name : ");
		gets(stu.Father_name);
			fprintf(sfp,"name is :  ",stu.Father_name);
		fflush(stdin);
		printf("\n Enter Student Roll Number : ");
		scanf("%llu",&stu.Roll_no);
			fprintf(sfp,"name is :  ",stu.Roll_no);
		printf("\n Enter Student branch name : ");
		fflush(stdin);
		gets(stu.branch);
	   fprintf(sfp,"name is :  ",stu.branch);
		printf("How many subject to read : ");
		scanf("%d",&num);
		for(j=0;j<num;j++){
			printf("\n Enter students marks....\n");
			printf("\n Enter %d Students %d Subject : ",i,j+1);
			scanf("%d",&stu.marks);
		}
	}

	if(sfp!=NULL) {
		printf("\nRecord submitted successfuly\n");
	}
  
	fclose(sfp);
	getch();
}
	
	
	
	
		 
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	