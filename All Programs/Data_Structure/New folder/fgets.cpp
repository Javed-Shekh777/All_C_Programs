#include"stdio.h"
#include"conio.h"
int main(){
	FILE *fp;
	fp=fopen("emp.txt","w");
	char str[5];
//	fgets(str,4,fp);
	fputc('H',fp);
	fputs("\niugyftdrfsdxfcgvbh",fp);
//	printf("The string is = %s\n",str);
	return 0;
}