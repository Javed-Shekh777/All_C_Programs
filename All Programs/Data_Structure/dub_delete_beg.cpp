#include<stdio.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next,*pre;
	};
	struct Node *start,*temp,*last;
	start=last=NULL;
	int n,i;
	printf("\n How many Nodes you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("\n Enter %d Node Data : ",i+1);
		scanf("%d",&temp->data);
		temp->next=temp->pre=NULL;
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
temp=start;
start=start->next;
start->pre=NULL;
free(temp);

temp=start;
while(temp!=NULL){
	printf("%d -> ",temp->data);
	temp=temp->next;
}
printf("NULL");
}