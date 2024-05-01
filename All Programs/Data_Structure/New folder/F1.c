// WAP to create a text file with name Input.txt and write some text Data into the file.
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char ch;
	fp = fopen("Input.txt","w");
	if(fp==NULL){
		printf("File is Not Exit:");
	}
	else {
		printf("\n File is Exit. \n");}
		printf("Write something :");
	ch = getchar();
		char name[50];
int age;
float salary;
       
      if(fp==NULL){
      printf("\nFile is Not Exit:\n");
      
      }
      printf("\n Enter Your Name : ");
      gets(name);
      fprintf(fp,"Name    = %s\n",name);
      printf("\n Enter your Age : ");
      scanf("%d",&age);
      fprintf(fp,"Age = %d\n",age);
      printf("\n Enter your salary : ");
      scanf("%f",&salary);
      fprintf(fp,"Salary = %f\n",salary);
	while(ch!=-1){
		fputc(ch,fp);
		ch=getchar();
	}
 
	fclose(fp);
	getch();
}
