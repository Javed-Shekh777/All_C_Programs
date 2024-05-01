#include<stdio.h>
#include<conio.h>
int main(){
	char c;
	c = gatchar();
	while(c != EOF){
		fgetc(c,fp);
		c = getchar();
	}
}