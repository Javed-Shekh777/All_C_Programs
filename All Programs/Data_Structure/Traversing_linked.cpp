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
	printf(">>>>>>>>>>>>>>>>>>>>>HOW MANY NODES YOU WANT TO ENTER:>>>>>>>>>>>>>>>>>>>>\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Please Enter %d Node Data : ",i+1);
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
	printf("\nPrinting All nodes Data after traversing:\n");
	struct Node *p;
	p=start;
	while(p!=NULL){
		printf("%d -> ",p->data);
		p=p->next;
	}
	printf("NULL");
}