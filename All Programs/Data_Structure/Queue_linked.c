// Stack using Linked list.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};
struct node *front=NULL,*rear=NULL;

void Inqueue();
void Dequeue();
void Display();
void Traverse();
void Search();
//void Edit_data();

int main(){
	int ch;
	while(1){
	printf("\n\t\t\t********************* QUEUE EMPLEMENTATION USING ARRAY********************");
	printf("\n-----------------------------------------------------------------------------------");
	printf("\nPress 1-> To Inqueue");
	printf("\nPress 2-> To Dequeue");
	printf("\nPress 3-> To Display");
	printf("\nPress 4-> To Traverse");
	printf("\nPress 5-> To Search");
	printf("\nPress 6-> To Edit Data");
	printf("\nPress 7-> To Exit");
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\tEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			Inqueue();
			break;
		case 2:
		    Dequeue();
			break;
		case 3:
		    Display();
			break;
		case 4:
		    Traverse();
			break;
		case 5:
		    Search();
			break;
		case 6:
//		    Edit_data();
//			break;			
		case 7:
		    exit(1);
			break;	
		default :
		    printf("\nWrong choice Entered");
			printf("\n\t\t\t Press any key to continue.....");
			getch();			
		}
   }
}

void Inqueue(){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(rear==NULL){
		rear=front=temp;
	}
	else {
		rear->link=temp;
		rear=temp;
	}
}

void Display(){
	struct node *temp;
	temp=front;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}

void Dequeue(){
	if(front==NULL){
		printf("\nUNDERFLOW");
		printf("\nPress any key to continue....\n");
		getch();
	}
	struct node *temp;
	temp=front;
	printf("\nDeleted Data : %d",temp->data);
	front=front->link;
	free(temp);
}

void Traverse(){
	if(front==NULL){
		printf("\Queue is already Empty\n");
		printf("\nPress any key to continue....\n");
		getch();
	}
	struct node *temp;
	temp=front;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->link;
	}
	printf("NULL");
	printf("\nQueue successfully Traversed");
	printf("\nPress any key to continue.....\n");
	getch();
}

void Search(){
	if(front==NULL){
		printf("\Queue is already Empty\n");
		printf("\nPress any key to continue.....\n");
	}
	struct node *temp;
	int val;
	printf("\nEnter value to search : ");
	scanf("%d",&val);
	temp=front;
	while(temp!=NULL){
		 if(val==temp->data){
		 	printf("\nData is Found : %d",temp->data);
		 	break;
		 }
		temp=temp->link;
	}
	if(temp==NULL){
		printf("\nI am sorry Data does not exist\n");
	}
}