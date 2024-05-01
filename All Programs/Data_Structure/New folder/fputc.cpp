#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char text[300];
	fp=fopen("File1.txt","r");
	fputs("How are you oiuhsd  skjdifhbv kjshdbcv kjdnv  djvn",fp);
	printf("%s",fgets(text,200,fp));
	fclose(fp);
}

//char* fgets(char *s, int n, FILE *stream)  