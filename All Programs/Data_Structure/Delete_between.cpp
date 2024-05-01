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
	printf("How many nodes you want:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("Please Enter %d Nodes Data : ",i+1);
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
	int pos;
	printf("Please Enter position of node to delete that node : ");
	scanf("%d",&pos);
	struct Node *p;
	p=start;
	while((pos-2)>0){
		p=p->next;
		pos--;
	}
	printf("\nPrinting All Nodes Data:\n");
    temp=p->next;
    p->next=temp->next;
    free(temp);
    temp=start;
    while(temp!=NULL){
    	printf("%d -> ",temp->data);
    	temp=temp->next;
	}
	printf("NULL");
}