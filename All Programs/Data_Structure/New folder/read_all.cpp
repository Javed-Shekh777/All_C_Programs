#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int ch;
	FILE *fp;
	fp=fopen("fstu1.txt","r");
	ch=fgetc(fstu1);
	while(ch!=EOF){
		printf("%c",ch);
			ch=fgetc(fstu1);
	}
	return 0;
}