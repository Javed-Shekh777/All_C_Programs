#include<stdio.h>
#include<stdlib.h>
int main(){
     struct Node {
     	int data;
	 };
	 struct Node *next[10],*start,*last,*temp;
	 int n,i,j;
	 start=last=NULL;
	 printf("Please entr no of times:\n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	 	temp=(struct Node *)malloc(sizeof(struct Node));
	 	printf("PLease enter data:\n");
	 		next[i]=temp;
	 //	scanf("%d",temp->data);
	 scanf("%d",next[i]);
	}
	temp=next[0];
	for(i=0;i<n;i++){
		//printf("%d\n",next[i]);
		printf("\n%d",next[i]->data);
		//temp=next[i];
	}
	 
}