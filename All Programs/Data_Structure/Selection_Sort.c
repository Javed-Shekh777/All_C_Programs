#include"stdio.h"
#include"conio.h"
#define size 20
int main(){
	int ar[size],i,j,temp,pos=-1,n;
	printf("\nPLease Enter 5 elements of an Array : ");
	printf("\nHow many elements you want : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
 	  printf("\nPrinting unsorted Array : \n");
 	  for(i=0;i<n;i++){
 	  	printf("%d\t",ar[i]);
	   }
	    
 	  for(i=0;i<n;i++){
 	  	temp=ar[i];
 	  	for(j=i+1;j<n;j++){
 	  		if(ar[j]<ar[i]){
 	  			ar[i]=ar[j];
 	  			pos=j;
			   }
		   }
		   ar[pos]=temp;
		    
	   }
	   
	   printf("\nPrinting Sorted Array : \n");
 	  for(i=0;i<n;i++){
 	  	printf("%d\t",ar[i]);
	   }
}
 
