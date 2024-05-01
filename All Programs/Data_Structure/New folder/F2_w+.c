// WAP to create a file named InputW.txt write some content into and then read the file.
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char fname[30],ch;
	printf("\n Enter the file name : ");
	scanf("%s",fname);
	fp = fopen(fname,"w+");
	ch = getchar();
	while(ch!=EOF){
		fputc(ch,fp);
		ch=getchar();
	}
	printf("\n File Created.....");
	getchar();
	printf("\n The contents of file are....");
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF){
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	
}