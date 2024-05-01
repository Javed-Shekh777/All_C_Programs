#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	fp = fopen("Index.txt","w+");
	char ch;
	ch=getchar();
	while(ch!=-1){
		fputc(ch,fp);
		ch=getchar();
	}
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=-1){
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	getch();
}