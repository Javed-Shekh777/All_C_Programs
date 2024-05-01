// Write a C program to print multiplication table of any number.
#include<stdio.h>
#include<conio.h>
int main(){
	int term,number,i;
	printf("To print multiplication table of any number and any term:\n");
    printf("\n Please enter the value of table:\n");
    scanf("%d",&number);
    printf("Please enter the value of term:\n");
    scanf("%d",&term);
    printf("Your table is below......\n");
    for(i=1;i<=term;i++){
    	printf("\n%d * %d = %d",number,i,number*i);
	}
	return 0;
}