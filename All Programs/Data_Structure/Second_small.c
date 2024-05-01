// WAP to find th second smallest number in an array.
#include<stdio.h>
#include<conio.h>
int main(){
	int A[5],min,min2,i;
	for(i=0;i<5;i++){
		printf("\nEnter %d Number : ",i+1);
		scanf("%d",&A[1]);
	}
	min=A[0]; min2=A[1];
	 if(A[0]>A[1]){
		min2=A[0];
		min=A[1];
	}
	else {
		min2=A[1];
	    min=A[0];
	}
	for(i=2;i<5;i++){
		if(A[i]<min){
			min2=min;
			min=A[i];
		}
		else {
			if(A[i]<min2){
				min2=A[i];
			}
		}
	}
	printf("\nFirst Smallest number : %d",min);
	printf("\nSecond Smallest number : %d",min2);
}