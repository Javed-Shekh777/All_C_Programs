// Write a C program to find two's complement of a binary number.
#include<stdio.h>
#include<conio.h>

int main(){
	int num,i=0,count=-1,one[100],two[100],carry=1;
	printf("\nPlease Enter a number : ");
	scanf("%d",&num);
	printf("\nMain number is : %d",num);
	printf("\nBinary number is : ");
	while(num>0){
		one[i]=num%2;
		num/=2;
		count++;
		i++;
	}
	printf("\nBinary number is : ");
	for(i=count;i>=0;i--){
		printf("%d ",one[i]);
	}
	printf("\nOnes complement is : ");
	for(i=count;i>=0;i--){
		one[i]>0?one[i]=0:(one[i]=1);
		printf("%d ",one[i]);
	}
	for(i=0;i<=count;i++){
		 if(one[i]==1&&carry==1){
		 	two[i]=0;
		 }
		 else if(one[i]==0&&carry==1){
		 	two[i]=1;
		 	carry=0;
		 }
		 else {
		 	two[i]=one[i];
		 }
	}
	printf("\nTwo's Complement is : ");
	for(i=0;i<=count;i++){
		printf("%d ",two[i]);
	}
}