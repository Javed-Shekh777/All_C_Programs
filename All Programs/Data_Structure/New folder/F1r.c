#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char ch;
	fp = fopen("Input.txt","r");
	if(fp==NULL){
		printf("File Input.txt does not Exit.\n");
	}
	else {
		ch=fgetc(fp);
		while(ch!=-1){
			printf("%c",ch);
			ch=fgetc(fp);
		}
	}
	fclose(fp);
	getch();
}