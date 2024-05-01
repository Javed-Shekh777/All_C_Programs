#include<stdio.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next;
	};
	struct Node *last,*start,*temp;
	start=last=NULL;
	int i,n;
	printf("How many nodes you want to enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Please enter %d Nodes data:\n",i+1);
		scanf("%d",temp->data);
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
	printf("Please enter one node to insert it in bigining:\n");
	scanf("%d",temp->data);
	temp->next=NULL;
//	struct Node *p;
	temp->next=start;
	start=temp;
	
	temp=start;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}