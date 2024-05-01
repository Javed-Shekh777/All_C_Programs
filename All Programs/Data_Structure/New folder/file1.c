//#include<stdio.h>
//int main(){
//	FILE *fp;
//	char s[]="Hello Student",g[100];
//	int i;
//	fp=fopen("f1.txt","w");
//	if(fp==NULL){
//		printf("File is not Exist");
//		exit(1);
//	}
// 
//	for(i=0;i<strlen(s);i++)
//		fputc(s[i],fp);
//	getch();
//	fclose(fp);
//	getch(fp);
//}

#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	char s[]="Hello Student";
	int i;
	fp=fopen("f1.txt","r");
	if(fp==NULL){
		printf("File is not Exist");
		exit(1);
	}
     ch=fgetc(fp);
     while(ch!=EOF){
           	printf("%c",ch);
           	ch=fgetc(fp);
	 }
	 fclose(fp);
	 getch();
	 
}