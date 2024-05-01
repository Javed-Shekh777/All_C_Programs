#include<stdio.h>
#include<conio.h>
 
 //NNNNNOOOOTTTT DDONNNNNEEEEEEE
int main(){
	int ar[200],n,i,sum=0;
	float mean;
	printf("\nPlease Enter the size of Array :");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array :",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data : ",i);
		scanf("%d",ar[i]);
		 
	}
	for(i=0;i<n;i++){
		sum=sum+ar[i];
	}
	   mean=(sum/n);
	 printf("\nThe total number of mean is : %.2f",mean);
	 return 0;
}