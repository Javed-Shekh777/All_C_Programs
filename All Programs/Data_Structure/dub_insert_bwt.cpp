// WAP to insert a number in between.
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
	printf("HOW MANY NODES YOU WANT TO ENTER IN BETWEEN : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct node *)malloc(sizeof(struct node));
		printf("\n Enter %d Node Data : ",i+1);
		scanf("%d",&temp->data);
		temp->next=NULL;
		temp->pre=NULL;
		if(start==NULL){
			start=last=temp;
		}
		else {
		temp->pre=last;
		last->next=temp;
		last=temp;
		}
	}
	 int pos;
	 printf("\n Enter the position : ");
	 scanf("%d",&pos);
	 struct node *p;
	 while((pos-2)>0){
	 	p=p->next;
	 	pos=pos-1;
	 }
	 temp=(struct node *)malloc(sizeof(struct node));
	 printf("\n Enter the number in between : ");
	 scanf("%d",&temp->data);
	 temp->next=NULL;
	 temp->pre=NULL;
	 
	 temp->next=(p->next)->pre;
	 p->next=temp;
	 temp->pre=p;
	 (p->next)->pre=temp;
	 
	  temp=start;
  while(temp!=NULL){
  	printf("%d -> ",temp->data);
  	temp=temp->next;
  }
  printf("NULL");
 }                                                          