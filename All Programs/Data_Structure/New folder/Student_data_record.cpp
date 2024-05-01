#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Insert_record();
void Display_record();
 struct student {
 	char name[100];
 	long long int roll;
 	char fname[100];
 	char branch[100];
 };
 struct student s;
  int main(){
  	int ch;
  	while(1){
  		printf("\n\t\t\t\t\t\t <<<<<<<<<<<<< STUDENT MANAGEMENT RECORD >>>>>>>>>>>>>>>>>>>>>");
	    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------");
	    printf("\n\n\t\t\t\t\t-------------------------------------");
	    printf("\n\t\t\t\t\t\t1. Create");
	    printf("\n\t\t\t\t\t\t2. Display");
	    printf("\n\t\t\t\t\t\t3. Exit");
	    printf("\n\n\t\t\t\t\t----------------------------------------");
	    printf("\n\n\n----------------------------------------------------------------- Please Choose Any One Option--------------------------------------------------------------");
 
		printf("\n\n\t\t\t Enter your choice : ");
	    scanf("%d",&ch);
	    switch(ch){
	    	case 1:
	    		Insert_record();
	    		break;
	    	case 2:
			    Display_record();
				break;
			case 3:
			     exit(1);
				 break;
			default :
			   printf("\nYou Entered wrong choice");
			   break;   	 		
		}
    }
}

void Insert_record(){
	FILE *fp;
	fp=fopen("stud.txt","wb");
	if(fp==NULL){
		printf("\nFile does not exist");
	     exit(1);
	}
	printf("\n------------------------------------------------------ PREVIOUS RECORD DISPLAYING-------------------------------------------------------------------");
	Display_record();
	fflush(stdin);
	printf("\nEnter your name : ");
	fflush(stdin);
	gets(s.name);
	printf("\nEnter your Father name : ");
	fflush(stdin);
	gets(s.fname);
	fflush(stdin);
	printf("\nEnter your Branch Name : ");
	gets(s.branch);
	fflush(stdin);
	printf("\nEnter your Roll number : ");
	scanf("%lld",&s.roll);
		printf("\n\n\t\t\t\t  Record Submitted Successfully.\n\n");
		fclose(fp);
	}

void Display_record(){
	FILE *fp;
	fp=fopen("stud.txt","rb");
	if(fp==NULL){
		printf("\nFile does not exist");
		exit(1);
	}
 
	 fread(&s,sizeof(s),1,fp);
	 printf("\nName\t\t\t Father Name\t\t\t  Roll\t\t\t Branch\t\t");
	 printf("\n%s\t\t %s\t\t\t %lld\t\t\t %s\t\t\t\t",s.name,s.fname,s.roll,s.branch);
	fclose(fp);
}
	    
	    