#include<stdio.h>
#include<conio.h>
int main(){
	int ar[5],i,j,num;
	printf("\nPlease Enter 5 Elements of An Array.\n");
	for(i=0;i<5;i++){
		scanf("%d",&ar[i]);
	}
	printf("\nUnsorted Array is below :\n");
	for(i=0;i<5;i++){
		printf("%d ",ar[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(ar[j]<ar[i]){
				num=ar[i];
				ar[i]=ar[j];
				ar[j]=num;
			}
		}
	}
	 
	printf("\nAscending order Array is below :\n");
	for(i=0;i<5;i++){
		printf("%d ",ar[i]);
	}
	printf("\nDescending Order Array is below :\n");
	for(i=4;i>=0;i--){
		printf("%d ",ar[i]);
	}
}