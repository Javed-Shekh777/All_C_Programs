/*#include<stdio.h>
int main(){
	int size,i,j,max,maxx,min,minn;
	printf("Enter the size of An Array:\n");
	scanf("%d",&size);
	int A[size];
	if(size<2){
		printf("Invalid Array Entered:\n");
	}
	printf("Please enter elements are below...:\n");
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	max=A[0];
	min=A[0];
	for(i=0;i<size;i++){
			if(max<A[i]){
				max=A[i];
		}
		if(A[i]<min){
				min=A[i];
		}
				}
				
			maxx=A[0];
			minn=A[0];
			for(i=1;i<size;i++){
				if(A[i]>maxx&&A[i]<max){
					maxx=A[i];
				}
				if(A[i]>maxx&&A[i]<min){
					minn=A[i];
				}
			}
			
				for(i=0;i<size;i++){
		printf("%d, ",A[i]);
	}
	printf("\nThe First largest number is =%d\n",max);
	printf("\nThe First largest number is =%d\n",maxx);
	printf("\nThe First Lowest number is =%d\n",min);
	printf("\nThe First Lowest number is =%d\n",minn);
	return 0;
}*/




//                                 Method Second.
#include<stdio.h>
int main(){
	int size,i,lar,slar,t;
	printf("Please enter the size of Array:\n");
	scanf("%d",&size);
	int A[size];
	printf("\nPlease enter %d elements for an Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	printf("The Entered array is given below:\n");
	for(i=0;i<size;i++){
		printf("%d, ",A[i]);
	}
	lar=A[0], slar=A[1];
	//A[0]>A[1]?lar=A[0]:slar=A[1];
	if(A[0]>A[1]){
		lar=A[0];
		slar=A[1];
	}
	else {
		lar=A[1];
		slar=A[0];
	}
	for(i=2;i<size;i++){
		if(A[i]>lar){
			slar=lar;
			lar=A[i];
		}
		else {
			if(A[i]>slar){
				slar=A[i];
			}
		}
	}
	printf("\nThe Largest element is = %d",lar);
	printf("\nThe Second largest element is = %d",slar);
	return 0;
}
