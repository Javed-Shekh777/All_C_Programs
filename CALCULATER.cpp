#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	printf("Table Learn.................");
	int i,term,num;
	printf("Please Enter the number to create Table..\n");
	scanf("%d",&num);
	printf("Please Enter the no of term for Table..\n");
	scanf("%d",&term);
	for(i=1;i<=term;i++){
		printf("%d x %d = %d\n",i,num,i*num);
	}
	int sum=0;
	printf("To Add the number...");
	printf("Please enter the term to adding number\n");
	scanf("%d",&term);
	printf("Please enter the numbers\n");
	for(i=0;i<=term;i++){
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("Your total sum of numbers is=%d",sum);
	getch();
}