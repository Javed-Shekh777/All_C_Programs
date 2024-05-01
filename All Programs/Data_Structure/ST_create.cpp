// How to create nodes in Linked_lists.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next;
	};
	struct Node *start, *last, *temp;
	start=last=NULL;
	int i,n;
	printf("How many Nodes you want to enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *) malloc(sizeof(struct Node));
		printf("Pleas enter %d Nodes Data:\n",i+1);
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
	temp=start;
	while(temp!=NULL){
		printf("%d\n",(temp->data));
		temp=temp->next;
	}
	
}
	
	
