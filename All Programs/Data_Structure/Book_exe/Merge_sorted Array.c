/*  Write a program to merge two sorted arrays */
#include<stdio.h>
#include<conio.h>
int main(){
	int ar1[10],ar2[10],ar3[20],n1,n2,m,i,j,index=0,index1=0,index2=0;
	printf("\nPlease Enter the size of Array1 : ");
	scanf("%d",&n1);
	printf("\nEnter %d elements for Array  : ",n1);
	for(i=0;i<n1;i++){
		printf("\nArray1[%d] : ",i);
		scanf("%d",&ar1[i]);
	}
	printf("\nPlease Enter the size of Array2 : ");
	scanf("%d",&n2);
	printf("\nEnter %d elements for Array2  : ",n2);
	for(i=0;i<n2;i++){
		printf("\nArray2[%d] : ",i);
		scanf("%d",&ar2[i]);
	}
	m=n1+n2;
	 while(index1<n1&&index2<n2){
	 	if(ar1[index1]<ar2[index2]){
	 		ar3[index]=ar1[index1];
	 		index1++;
		 }
		 else {
		 	ar3[index]=ar2[index2];
		 	index2++;
		 }
		 index++;
	 } 
	 
	 if(index1==n1){
	 	while(index2<n2){
	 		ar3[index]=ar2[index2];
	 		index2++;
	 		index++;
		 }
	 }
	 
	  if(index2==n2){
	 	while(index1<n1){
	 		ar3[index]=ar2[index1];
	 		index1++;
	 		index++;
		 }
	 }
	printf("\nAfter merging Array is : \n");
	for(i=0;i<m;i++){
		printf("\nArray3 [%d] = %d",i,ar3[i]);
	}
}