//   Queue using 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
	if((front==0&&rear==4)||(rear==front-1)){
		printf("\nQueue Already Full");
	}
	else if(front==-1||rear==-1){
		front++;
		rear++;
		printf("\nEnter Data : ");
		scanf("%d",&Queue[rear]);
	}
	else if(rear==4&&front!=0){
		rear=0;
		printf("\nEnter Data : ");
		scanf("%d",&Queue[rear]);
	}
	else {
		rear++;
		printf("\nEnter Data : ");
		scanf("%d",&Queue[rear]);
	}
}

void Dequeue(){
	if(front==-1||rear==-1){
		printf("\nQueue is Empty");
	}
else if(rear==front){
		printf("\nDeleted Data : %d",Queue[front]);
		rear=front=-1;
	}
	else if(front==4){
		printf("\nDeleted Data : %d",Queue[front]);
		front=0;
	}
	else {
		printf("\nDeleted Data : %d",Queue[front]);
		front++;	
	}
}

void Display(){
	if(front==-1||rear==-1){
		printf("\nQueue is Empty");
	}
   else if(rear==front){
			printf("\nData : %d",Queue[front]);
			front=rear=-1;
		}
	else if(rear<front){
			for(int i=front;i<=4;i++){
				printf("\n Data : %d",Queue[i]);
			}
			for(int i=0;i<=rear;i++){
				printf("\nData : %d",Queue[i]);
			}
		}
		else {
			for(int i=front;i<=rear;i++){
			printf("\nData : %d",Queue[i]);
			}
		}
}

void Traverse(){
	if(front==-1||rear==-1){
		printf("\nQueue is Empty");
	}
    else if(rear==front){
			printf("\nData : %d",Queue[front]);
			front=rear=-1;
		}
	else if(rear<front){
			for(int i=front;i<=4;i++){
				printf("\n Data : %d",Queue[i]);
			}
			for(int i=0;i<=rear;i++){
				printf("\nData : %d",Queue[i]);
			}
		}
		else {
			for(int i=front;i<=rear;i++){
			printf("\nData : %d",Queue[i]);
			}
		}
		printf("\nQueue Traversed successfully");
		printf("\n\tPress any key to continue....\n");
		getch();
}

void Search(){
	int val,flag=0;
	printf("\nEnter Data to search : ");
	scanf("%d",&val);
	if(front==-1||rear==-1){
		printf("\nQueue is Empty");
		return ;
	}
	else if(rear==front){
			if(val==Queue[rear]){
				printf("\nData is Found");
				flag=1;
			}
		}
	else if(rear<front){
			for(int i=front;i<=4;i++){
				 if(val==Queue[i]){
				printf("\nData is Found");
				flag=1;
		   }
		}
			for(int i=0;i<=rear;i++){
				 if(val==Queue[i]){
					printf("\nData is Found");
					flag=1;
		   }
		}		 
	}
	else{
		for(int i=front;i<=rear;i++){
			if(val==Queue[i]){
			printf("\nData is Found");
			flag=1;
			break;
		    }
		}
	}
	if(flag==0){
		printf("\nData is not Found");
	}
}

void Edit_data(){
	int val,pos,p=0;
	printf("\nEnter Data which you want to re-write : ");
	scanf("%d",&pos);
	printf("\nEnter Data to over_write : ");
	scanf("%d",&val);
	if(front==-1){
		printf("\nQueue is Empty");
		return ;
	}
	 else if(rear==front){
			if(pos==Queue[rear]){
				 Queue[rear]=val;
				 p=1;
			}
		}
	else if(rear<front){
			for(int i=front;i<=4;i++){
				 if(pos==Queue[i]){
				 Queue[i]=val;
				 p=1;
		   }
		}
			for(int i=0;i<=rear;i++){
				 if(pos==Queue[i]){
					 Queue[i]=val;
					 p=1;
		   }
		}		 
}
	else{
		for(int i=front;i<=rear;i++){
			if(pos==Queue[i]){
		     Queue[i]=val;
		     p=1;
			break;
		    }
		}
	}
	if(p!=0)
	printf("\nData Edited successfully\n");
	else 
	printf("\nData Not Edited");
}