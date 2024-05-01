#include<stdio.h>
#include<conio.h>
void read_array(int [],int);
void display_array(int [],int);
int find_smallest_pos(int [],int);
int find_biggest_pos(int [],int);
void interchange(int [],int);
void main(){
	int ar[20],n,small,big,i,temp;
	printf("\nPlease enter the size of Array  :");
	scanf("%d",&n);
	read_array(ar,n);
	printf("\n\nPrinting Array: \n");
	for(i=0;i<n;i++){
		printf(" [%d]  ",ar[i]);
	}
	 interchange(ar,n);
	  
	
}

void read_array(int ar[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n Array[%d] : ",i);
		scanf("%d",&ar[i]);
	}
}
int find_smallest_pos(int ar[],int n){
	int i,pos,small=ar[0];
	for(i=1;i<n;i++){
		if(ar[i]<small){
			small=ar[i];
			pos=i;
		}
	}
	printf("\nThe Smallest nubmer is : %d at Position[%d]",small,pos);
	return small;
}

int find_biggest_pos(int ar[],int n){
	int i,pos,big=ar[0];
	for(i=1;i<n;i++){
		if(ar[i]>big){
			big=ar[i];
			pos=i;
		}
	}
	printf("\nThe Biggest number is : %d Position[%d]",big,pos);
	return big;
}
void display_array(int ar[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n Array[%d] = %d",i,i[ar]);
	}
}
void interchange(int ar[],int n){
	int i,big,small,temp;
	big=find_biggest_pos(ar,n);
	printf("\nBig = %d",big);
	small=find_smallest_pos(ar,n);
	printf("\nSmall = %d",small);
	temp=small;
	  small=big;
	  big=temp;
	 display_array(ar,n);
}