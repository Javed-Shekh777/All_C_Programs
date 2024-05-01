#include<stdio.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next;
	};
	struct Node *start,*last,*temp;
	start=last=NULL;
	int i,n;
	printf("How many nodes you are want to enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Please Enter %d Node Data : ",i+1);
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(start==NULL){
			start=last=temp;
		}
		else 
		{
			last->next=temp;
			last=temp;
		}
	}
	temp=(struct Node *)malloc(sizeof(struct Node));
	printf("Please Enter last node data:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	last->next=temp;
	last=temp;
	printf("\nPrinting All Nodes Data after Inserting in Last:\n");
	temp=start;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}