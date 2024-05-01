// Adding two linked list
#include<stdio.h>
#include<stdlib.h>
int main(){
	struct node {
		int data;
		struct node *link;
	};
	struct node *start,*start1,*start2,*temp,*temp1,*temp2,*last,*last1,*last2;
	start=start1=start2=temp=temp1=temp2=NULL;
	int n,n1,n2,i,j,k;
	printf("\nSize of 1 : ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		temp1=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter %d data : ",i+1);
		scanf("%d",&temp1->data);
		temp1->link=NULL;
		if(start1==NULL){
			start1=last1=temp1;
		}
		else {
			last1->link=temp1;
			last1=temp1;
		}
	}
	
	printf("\n\n\nSize of 2 : ");
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		temp2=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter %d data : ",i+1);
		scanf("%d",&temp2->data);
		temp2->link=NULL;
		if(start2==NULL){
			start2=last2=temp2;
		}
		else {
			last2->link=temp2;
			last2=temp2;
		}
	}
	temp1=start1;
	while(temp1!=NULL){
		printf("%d -> ",temp1->data);
		temp1=temp1->link;
	}
	printf("\n\n");
	temp2=start2;
	while(temp2!=NULL){
		printf("%d -> ",temp2->data);
		temp2=temp2->link;
	}
	n=n1+n2;
	 
		temp=start1;
		 while(temp1!=NULL){
			temp->data=temp1->data;
			temp=temp->link;
			temp1=temp1->link;	   
	}
	temp=start2;
	 while(temp2!=NULL){
			temp->data=temp2->data;
			temp=temp->link;
			temp2=temp2->link;	   
	}
	printf("\n\n\n\t\t");
	temp=start=start1;
	while(temp!=NULL){
		printf("%d _> ",temp->data);
		temp=temp->link;
	}
	 
}