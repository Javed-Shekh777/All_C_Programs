 #include<stdio.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next,*pre;
	};
	struct Node *start,*last,*temp;
	start=last=temp=NULL;
	int i,n;
	printf("HOW MANY NODES YOU WANT TO ENTER : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Please Enter %d Node Data : ",i+1);
		scanf("%d",&temp->data);
		temp->pre=temp->next=NULL;
		if(start==NULL){
			start=last=temp;
		}
		else 
		{
			last->next=temp;
			temp->pre=last;
			last=temp;
		}
	}
	temp=(struct Node *)malloc(sizeof(struct Node));
	printf("\n Enter a number to insert at Beginning : ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->pre=NULL;
	temp->next=start;
	start->pre=temp;
	start=temp;
	temp=start;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}