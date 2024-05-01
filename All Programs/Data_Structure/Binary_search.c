#include<stdio.h>
#include<conio.h>
int main(){
	int i,num,low=0,high,pos=-1,ar[20],n,mid,found=0;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nPlease Enter %d elements for Array : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("\nEnter number to search : ");
	scanf("%d",&num);
	high=n-1;
	printf("\nPrinting the Array : \n");
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	  
	while(low<=high){
		mid=(low+high)/2;
		if(ar[mid]==num){
			printf("\n%d number is Found at Index[%d]",num,mid);
			break;
		}
		else if(ar[mid]<num){
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
	 if (low > high && found == 0)
printf("\n %d does not exist in the array", num);
	
}