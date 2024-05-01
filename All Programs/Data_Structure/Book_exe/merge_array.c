#include<stdio.h>
#include<conio.h>
int main(){
	int ar1[10],ar2[10],ar3[20],n1,n2,m,i,j,index=0;
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
	for(i=0;i<n1;i++){
		ar3[index]=ar1[i];
		index++;
	}
	for(i=0;i<n2;i++){
		ar3[index]=ar2[i];
		index++;
	}
	printf("\nAfter merging Array is : \n");
	for(i=0;i<m;i++){
		printf("\nArray3 [%d] = %d",i,ar3[i]);
	}
}