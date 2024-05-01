//    Queue  Emplementation .
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#define SIZE 5
int Queue[5],front=-1,rear=-1;
void Inqueue();
void Dequeue();
void Display();
void Traverse();
void Search();
void Edit_data();

int main(){
	int ch;
	while(1){
	printf("\n\t\t\t********************* QUEUE EMPLEMENTATION USING ARRAY********************");
	printf("\n-----------------------------------------------------------------------------------");
	printf("\nPress 1-> To Inqueue.\nPress 2-> To Dequeue.Press 3-> To Display.Press 4-> To Traverse.Press 5-> To Search.Press 6-> To Edit Data.Press 7-> To Exit");
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\tEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 1:system("cls");
			Inqueue();
			break;
		case 2:system("cls");
		    Dequeue();
			break;
		case 3:system("cls");
		    Display();
			break;
		case 4:system("cls");
		    Traverse();
			break;
		case 5:system("cls");
		    Search();
			break;
		case 6:system("cls");
		    Edit_data();
			break;			
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
	 if(rear==SIZE){
	 	printf("\nQueue is Already Full");
	 }
	 else if(front==-1||rear==-1){
	 	front=rear=0;
	 	printf("Enter Data : ");
	 	scanf("%d",&Queue[rear]);
	 }
	 else {
	 	printf("\nEnter Data : ");
	 	rear++;
	 	scanf("%d",&Queue[rear]);
	 }
}

void Dequeue(){
	if(front==-1){
		printf("\nQueue is Empty");
	}
	else if(front==rear){
		printf("Deleted Data : %d",Queue[front]);
		front=-1;
		rear=-1;
	}
	else {
		printf("\nDeleted Data : %d",Queue[front]);
		front++;
	}
}

void Display(){
	int i;
    if(front==-1){
    	printf("\nQueue is Empty");
	}
	else {
		for(i=front;i<=rear;i++){
			printf("Data is : %d\n",Queue[i]);
		}
	}
}

void Traverse(){
	int i;
    if(front==-1){
    	printf("\nQueue is Empty");
	}
	else {
		for(i=front;i<=rear;i++){
			printf("Data is : %d\n",Queue[i]);
		}
	}
	printf("\n\tQueue is traversed Successfully");
	printf("\n\t\t\tPress any key to continue....");
	getch();
}

void Search(){
	int val,i;
	if(front==-1){
		printf("\nQueue is Empty");
	}
	else {
		printf("\nEnter data to Search : ");
	scanf("%d",&val);
	for(i=front;i<=rear;i++){
		if(Queue[i]==val){
			printf("\nData is Found : %d",Queue[i]);
			break;
		}
	}
	if(i==rear+1){
		printf("\nData is not Found");
	}
  }
}

void Edit_data(){
	if(front==-1){
		printf("\nQueue is Empty");
	}
	else {
		int pos;
		printf("\nEnter Data(of queue) where you want to edit : ");
		scanf("%d",&pos);
		for(int i=front;i<=rear;i++){
			if(Queue[i]==pos){
				printf("Enter value to rewrite : ");
				scanf("%d",&Queue[i]);
				break;
			}
		}
	}
}