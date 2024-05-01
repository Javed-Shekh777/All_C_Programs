#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	 fp = fopen("text.txt","r");
	 if(fp==NULL){
	 	printf("\nFile is Not Exited.");
	 }
	 else {
	 	printf("\nFile is Exit.");
	 }
	 int a,b;
	 char c;
	 c=fgetc(fp);
	 printf("\n Enter something in character:\n");
	 while(c!=EOF){
	 puts(c);
	 c=fgetc(fp);
}
	 fclose(fp);
	 getch();
}