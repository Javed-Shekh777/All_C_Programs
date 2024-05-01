#include<stdio.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next,*pre;
	};
	struct Node *start,*last,*temp;
	start=last=NULL;
	int n,i;
	printf("How mant Node you want to Enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("\n Enter %d Node Data : ",i+1);
		scanf("%d",&temp->data);
		temp->pre=NULL;
		temp->next=NULL;
		if(start==NULL){
			start=last=temp;
		}
		else {
			last->next=temp;
			temp->pre=last;
			last=temp;
		}
	}
	temp=last;
	last=last->pre;
	last->next=NULL;
	free(temp);
	
	temp=start;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}