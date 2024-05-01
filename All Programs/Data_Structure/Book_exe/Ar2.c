#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],n,i,small,pos;
	printf("\nPlease enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d Elements for Array : ",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data: ",i);
		scanf("%d",&ar[i]);
	}
	small=ar[0];
	for(i=1;i<n;i++){
		if(ar[i]<small){
			small=ar[i];
			pos=i;
		}
	}
	printf("\nPrinting the Array :\n");
	for(i=0;i<n;i++){
		printf("[%d] ",ar[i]);
	}
	printf("\n\nThe Smalest number is : %d\nAnd Its Position is : [%d]",small,pos);
	}