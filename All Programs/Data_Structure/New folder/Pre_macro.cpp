#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	printf("File : %s\n",_FILE_);
	printf("Date : %s\n",_DATE_);
	printf("Time : %s\n",_TIME_);
	printf("Line : %s\n",_LINE_);
	printf("STDC : %s\n",_STDC_);
}