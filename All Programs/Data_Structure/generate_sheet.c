#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
 

char name[40], fa_name[40], ma_name[40],dob[15],s_name[100];
int hi_mark,en_mark,sci_mark,scc_mark,ma_mark,total;
float percentage;

void Generate_result();
void Input_detatils();

int main(){
 	int ch;
 	printf("---------------------------------------------------------------");
 	printf("\n                BOARD RESULT GENERATION PROJECT           ");
 	printf("\n-------------------------------------------------------------");
 	while(1){
	printf("\n1. Input");
	printf("\n2. Display");
	printf("\n3. Exit");   
 	printf("\n\t\t Enter your choice : ");
 	scanf("%d",&ch);
	switch(ch){
		case 1:
			Input_detatils();
			break;
		case 2:
		    Generate_result();
			break;
		case 3:
		    exit(1);
			break;
		default:		
		    printf("\nWRONG NUMBER ENRTERED");
	} 
	 }
 	  
 }

void  Input_detatils(){
	 printf("\n          Enter  your  Details    ");
	 printf("\n\n Enter your name : ");
	 fflush(stdin);
	 gets(name);
	 fflush(stdin);
	 printf("\nEnter your father name : ");
	 fflush(stdin);
	 gets(fa_name);
	 fflush(stdin);
	 printf("\nEnter your mother name : ");
	 fflush(stdin);
	 gets(ma_name);
	 fflush(stdin);
	 printf("\nEnter your School/College name : ");
	 fflush(stdin);
	 gets(s_name);
	 fflush(stdin);
	 printf("\nEnter your date of birth (xx - xx - xxxx): ");
	 fflush(stdin);
	 gets(dob);
	 fflush(stdin);
	 printf("\n\t\t Now Please enter your Subject marks ");
	 mark_1:
	 printf("\nEnter Hindi marks : ");
	 scanf("%d",&hi_mark);
	 if(hi_mark>100||hi_mark<1){
	 	printf("|nwrong marks entered");
	 	goto mark_1;
	 }
	 
	 mark_2:
	 printf("\nEnter English marks : ");
	 scanf("%d",&en_mark);
	 if(en_mark>100||en_mark<1){
	 	printf("|nwrong marks entered");
	 	goto mark_2;
	 }
	 
	 mark_3:
	 printf("\nEnter Hindi marks : ");
	 scanf("%d",&sci_mark);
	 if(sci_mark>100||sci_mark<1){
	 	printf("|nwrong marks entered");
	 	goto mark_3;
	 }
	 
	 mark_4:
	 printf("\nEnter Hindi marks : ");
	 scanf("%d",&scc_mark);
	 if(scc_mark>100||scc_mark<1){
	 	printf("|nwrong marks entered");
	 	goto mark_4;
	 }
	 
	 mark_5:
	 printf("\nEnter Hindi marks : ");
	 scanf("%d",&ma_mark);
	 if(ma_mark>100||ma_mark<1){
	 	printf("|nwrong marks entered");
	 	goto mark_5;
	 }  
	 total=hi_mark+en_mark+sci_mark+scc_mark+ma_mark;
	percentage=total/5;
}
	
void Generate_result(){
	  
	printf("\n\n\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n\t\t\t       UP BOARD MADHYAMIK SIKSHA PARISAD ALLAHABAD          ");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n\t\t\tName :                %s",name);
	printf("\n\t\t\tFather Name :         %s",fa_name);
	printf("\n\t\t\tMother Name :         %s",ma_name);
	printf("\n\t\t\tDOB :                 %s",dob);
	printf("\n\t\t\tSchool/College Name : %s",s_name);
	printf("\n");
	printf("\n=======================================================================================================================");
    printf("\n\t\t..........................................................................");
	printf("\n\t\t\tSubject               Max mark       Min mrk     Obtained_marks");
	printf("\n\t\t..........................................................................");
	printf("\n\t\t\tHINDI                   100            33            %d",hi_mark);
	printf("\n\t\t\tENGLISH                 100            33            %d",en_mark);
	printf("\n\t\t\tMATHEMATICS             100            33            %d",ma_mark);
	printf("\n\t\t\tSCIENCE                 100            33            %d",sci_mark);
	printf("\n\t\t\tSOCIAL_SCIENCE          100            33            %d",scc_mark);
	printf("\n\t\t-------------------------------------------------------------------------------");
	printf("\n\t\t                        TOTAL MARKS  :  %d     ||     PERCENTAGE : %0.2f %",total,percentage);  
	printf("\n\t\t-------------------------------------------------------------------------------");
	
	if(percentage>80&&percentage<=100){
		printf("\n\t\t\tPASS : Passed First Devision");
		printf("\n\t\t\tGRADE : A+");
	}
	if(percentage>60&&percentage<=80){
		printf("\n\t\t\tPASS : Passed Second Devision");
		printf("\n\t\t\tGRADE : A");
	}
	if(percentage>40&&percentage<=60){
		printf("\n\t\t\tPass : Passed Third Devision");
		printf("\n\t\t\tGRADE : B");
	}
	if(percentage>30&&percentage<=40){
		printf("\n\t\t\TPass : Passed Fourth Devision");
		printf("\n\t\t\tGRADE : C");
	}
	if(percentage>0&&percentage<=30){
		printf("\n\t\t\tPass : I am so sorry ! your are Failed");
		printf("\n\t\t\tGRADE : D");
	}
	printf("\n========================================================================================================================");
	printf("\n\n\t\t\tTHANKS FOR TO GIVE ME THIS OPPORTUNITY ");	
}                