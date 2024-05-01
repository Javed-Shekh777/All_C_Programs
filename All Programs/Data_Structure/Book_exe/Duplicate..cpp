/*Write a program to find whether the array of integers contains a duplicate number*/
#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,n,j,flag=0;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array  : ",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data : ",i);
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(ar[j]==ar[i] && i!=j){
				flag=1;
				printf("\nDuplicate number %d are Found at Index : [%d] and [%d]",ar[i],i,j);
			}
		}
	}
	if(flag==0){
		printf("\nThere are no Duplicate number in Array.");
	}
	return 0;
	
}