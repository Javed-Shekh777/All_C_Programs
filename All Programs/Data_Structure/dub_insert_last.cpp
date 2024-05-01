// WAP to insert a number at last.
#include<stdio.h>
#include<stdlib.h>
int main(){
	struct node {
		int data;
		struct node *pre;
		struct node *next;
	};
	struct node *start,*last,*temp;
	start=last=NULL;
	int n,i;
	printf("HOW MANY NODES YOU WANT TO ENTER : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	temp=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->next=temp->pre=NULL;
	if(start==NULL){
		start=last=temp;
	}
	else {
		last->next=temp;
		temp->pre=last;
		last=temp;
	}
}
struct node *p;
 	temp=(struct node *)malloc(sizeof(struct node));
 printf("\n Enter a number to insert at last : ");
 scanf("%d",&temp->data);
  temp->pre=temp->next=NULL;
  
  last->next=temp;
  temp->pre=last;
  last=temp;
  
  temp=start;
  while(temp!=NULL){
  	printf("%d -> ",temp->data);
  	temp=temp->next;
  }
  printf("NULL");
}