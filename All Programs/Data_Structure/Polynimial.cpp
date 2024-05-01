//   Polynomial equation solving by singly linked list.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node {
	int expo;
	float coef;
	struct Node *link;
};
 

struct Node * Create(struct Node *);
struct Node* Display(struct Node *);
struct Node * insert(struct Node *,int,float);
//struct Node * add();

int main(){
	int choice;
	while(1){
		printf("\n........................................................");
		printf("\n 1. Create");
		printf("\n 2. Display");
		printf("\n 3. Add");
		printf("\n 4. Exit");
		printf("\n........................................................");
		printf("\n\n\t\t\t Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				struct Node *head = NULL;
				head = Create(head);
				break;
//			case 2:
//			    head=Display(head);
//				break;
//			case 3:
//			    add();
//				break;	
			case 4:
			    exit(1);
				break;
			default : 
			    printf("\nWrong number entered");
				printf("\n\nPress any key to continue.....");
				getch();			
		}
	}
}

struct Node *Create(struct Node *head){
	int i,n,exp;
	float cof;
	printf("\nHow many nodes you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\nEnter the Coefficient of %d Term : ",i+1);
	scanf("%f",&cof);
	printf("\nEnter the its exponent of %d Term : ",i+1);
	scanf("%d",&exp);
	head = insert(head,expo,cof);
}
return head;

}

struct Node *Display(struct Node* head){
	struct Node *temp;
	temp=head;
	while(temp!=NULL){
		printf("(%0.1fx^%d) + ",temp->coef,temp->expo);
		temp=temp->link;
		 
	}
	return head;
}

 
	
struct Node *insert(struct Node *head,int exp,float cof){
	int ex;
	struct Node *newN,*temp;
	newN=(struct Node *)malloc(sizrof(struct Node*));
	newN->expo=exp;
	newN->coef=cof;
	newN->link=NULL;
	ex=exp;
	if(head==NULL||ex>temp->expo){
		newN->link=head;
		head=newN;
	}
	else {
		 temp=head;
		 while(temp->link!=NULL&&ex<temp->link->expo){
		 	temp=temp->link;
		 	newN->link = temp->link;
		 	temp->link=newN;
		 }
	}
	return head;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	