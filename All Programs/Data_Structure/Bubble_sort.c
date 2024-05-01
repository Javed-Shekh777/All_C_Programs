#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,j,temp,n,flag=0;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nPlease Enter %d elements for Array : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("\nPrinting Unsorted Array : \n");
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				flag=1;
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	if(flag==0){
		printf("\n\t\t$$$$$$$$$$ Array is already sorted $$$$$$$$$")
	}
	printf("\nPrinting Sorted Array :\n");
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	
}