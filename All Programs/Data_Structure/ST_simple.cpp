#include<stdio.h>
#include<stdlib.h>
int main(){
	struct Node {
		int data;
		struct Node *next;
	};
	struct bo {
		unsigned long long int j;
	};
	struct Node *start, *last, *temp,j;
	start=last=temp=NULL;
	int n;
	temp =(struct Node*) malloc(sizeof(struct Node));
	printf("Ente a number:\n");
	scanf("%d",temp->data);
	start=last=temp;
	printf("\n%d",temp->data);
	printf("\n%d",j.data);
	printf("\n%d",start->data);
	printf("\n%d",last->data);
	printf("\n\n The is = %d",sizeof(struct bo));
	
	return 0;
}