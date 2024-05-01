#include<stdio.h>
#include<stdlib.h>
int main(){
	//Declaration of one node information.
	struct Node {
		int data;
		struct Node *next;
	};
	struct Node *start,*last,*temp;    //Making pointer variables to handle linked list.
	start=last=NULL;
	int i,n;
	printf("How many nodes you want:\n");
	scanf("%d",&n);
	
	/*  Creation of linked list starts below.*/
	
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Enter %d node Data : ",i+1);
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(start==NULL){
			start=last=temp;
		}
	else {
			last->next=temp;
			last=temp;
		}
	}
	struct Node *p;
	p=start;
	while(p->next!=last){
		p=p->next;
	}		temp=(struct Node *)malloc(sizeof(struct Node));

	temp=last;
	last=p;
	last->next=NULL;
	free(temp);                    // Deleting last node from memory.
	printf("\nPrinting All nodes data after deleting last node:\n");
	temp=start;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}