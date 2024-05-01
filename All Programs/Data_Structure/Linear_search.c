#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,j,num,n,flag=0,pos=-1;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nPlease Enter %d elements of An Array  : \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("\nEnter number to search : ");
	scanf("%d",&num);
	printf("\nPrinting The Array  : ",n);
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	for(i=0;i<n;i++){
		if(ar[i]==num){
			flag=1;
			pos=i;
			 printf("\n%d is Founded and its position is =%d",num,pos);
			 break;
		}
	}
	if(flag==0){
		printf("Am so sorry ??????! \nNumber is not Found");
	}
	 
}
	