#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,n,large,secondlarge;
	int small,secondsmall;
	printf("\nPlease enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d Elements for Array : ",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data : ",i);
		scanf("%d",&ar[i]);
	}
	large=small=ar[0];
	for(i=1;i<n;i++){
		if(ar[i]>large){
			large=ar[i];
		}
		
		if(ar[i]<small){
			small=ar[i];
		}
	}
	secondlarge=secondsmall=ar[1];
	for(i=0;i<n;i++){
		if(ar[i]!=large){
			if(ar[i]>secondlarge){
				secondlarge=ar[i];
			}
		}
		if(ar[i]!=small){
			if(ar[i]<secondsmall){
				secondsmall=ar[i];
			}
		}
	}
	printf("\nPrinting the Array :\n");
	for(i=0;i<n;i++){
	printf("[%d] ",ar[i]);
	}
	printf("\nThe Largest number is  : %d",large);
	printf("\nThe Second largest number is : %d",secondlarge);
	printf("\nThe Smallest number is  : %d",small);
	printf("\nThe Second Smallest number is : %d",secondsmall);
	return 0;
}