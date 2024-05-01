 #include<stdio.h>
 #include<conio.h>
 int main(){
 	fp=fopen("emp.txt","r"); 
	  char c;
	  c=fgetc(fp);
	  printf("\nthe first character is : %c ",c);
	  c=fgetc(fp);
	  printf("\nThe second which is verified :  %c ", c);
	 return 0;
}