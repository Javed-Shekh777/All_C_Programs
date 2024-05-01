/*Write a program to create a linked list and perform insertion and deletion and other of all cases .
Write functions to sort and finally delete the entire list at once.*/
 
 // start coding from here........................
 
 // Header files 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
// Under a node data types
struct Node {
	int data;
	struct Node *next;
};
 
struct Node *start = NULL;

//  Function declaration.
void Create();
void Display ();
void Insert_beg();
void Insert_end();
void Insert_bet();
void Delete_beg();
void Delete_end();
void Delete_bet();
void Search();
void Traverse();
void count_node();
void reverse();
void sort_list();
void Feedback();
// Main function start from here.
int main(){
	int option;
	while(1) {
		printf("\n\n\t\t\t **************** MAIN MENU ****************\n");
		printf("---------------------------------------------------------------------------------------------------------------\n");
		printf("\n 1: Create a list");
		printf("\n 2: Dipaly the list");
		printf("\n 3: Add a node at the beginning");
		printf("\n 4: Add a node at the End");
		printf("\n 5: Add a node at specific position");
		printf("\n 6: Delete a node from the beginning");
		printf("\n 7: Delete a node from end");
		printf("\n 8: Delete a node from specific position");
		printf("\n 9. Search any Number");
		printf("\n 10. Traverse full List");
		printf("\n 11. Count the Node");
		printf("\n 12. Reverse Linked List");
	    printf("\n 13. Sorting in ascending order");
	    printf("\n 14. Feedback");
		printf("\n 15: EXIT");
		printf("\n\n-----------------------------------------------------------------------------------------------\n");
		printf("\n\n Enter your option :");
		scanf("%d",&option);
		switch(option){
			case 1: system("cls");
			    Create();
			    printf("\n LINKED LIST CREATED");
			    system("cls");
			    break;	
			case 2:system("cls");
			    Display();
				break;
			case 3:system("cls");
			    Insert_beg();
				break;
		    case 4:system("cls");
			    Insert_end();
				break;
			case 5:system("cls");
			    Insert_bet();
				break;
			case 6:system("cls");
			    Delete_beg();
				break;
			case 7:system("cls");
			    Delete_end();
				break;
			case 8:system("cls");
			    Delete_bet();
				break;
			case 9:system("cls");
			    Search();
				break;
			case 10:system("cls");
			    Traverse();
				break;
			case 11: system("cls");
			     count_node();
				 break;	
			case 12:system("cls");
			    reverse();
				break;	 		
			case 13:system("cls");
				sort_list();
				break;
			case 14:system("cls");
			     Feedback();
				 break;	
			case 15:exit(0);
		           break;
			default :
			    printf("\nWrong number entered");
			    printf("\n\t\t\t\t\tPress any key to continue...");
getch();
				break;	
	   }
    }
}

// Here are userdefind functions are written to perform above actions.

void Create()
{
	struct Node  *last, *temp;
	last=NULL;
	int i,n;
	printf("How many Nodes you want to enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *) malloc(sizeof(struct Node));
		printf("Pleas enter %d Nodes Data:\n",i+1);
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
	printf("\nLinked List Created....\n");
  
}// closing void Create function

void Display()
{
	struct Node *s;
	s=start;
	while(s!=NULL){
		printf("%d -> ",s->data);
		s=s->next;
	}
   printf("NULL");
}

void Insert_beg()
{
	struct Node *s,*temp;
	int num;
	temp=(struct Node *)malloc(sizeof(struct Node));
	printf("\n Enter the data : ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->next=start;
	start=temp;
	printf("\nInserted data is  : %d",temp->data);
}

void Insert_end()
{
	struct Node *temp,*last,*s;
	temp=(struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter node data : ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	
	s=start;
	while(s->next!=NULL){
		s=s->next;
	}
	s->next=temp;
	printf("\nInserted data is  : %d",temp->data);
}

void Insert_bet()
{
 struct Node *s,*temp;
 int pos;
 printf("\nEnter the Position : ");
 scanf("%d",&pos);
   s=start;
	while((pos-2)>0){
		s=s->next;
		pos--;
	}
	temp=(struct Node *)malloc(sizeof(struct Node));
 printf("\nEnter the Between Data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
  temp->next=s->next;
 s->next=temp;
 printf("\nInserted data is  : %d",temp->data);
}

void Delete_beg(){
	struct Node *s;
	s=start;
	start=start->next;
	printf("\nDelted data is  : %d",s->data);
	free(s);
	Display();
}

void Delete_end(){ 
	struct Node *s,*last,*temp;
	last=start;
	while(last->next!=NULL){
		last=last->next;
	}
	s=start;
	while(s->next!=last){
		s=s->next;
	}		 
	s->next=NULL;
	printf("\nDelted data is  : %d",last->data);
	free(last); 
}

void Delete_bet(){
	struct Node *s,*temp;
	int pos;
	printf("\nEnter the Position : ");
	scanf("%d",&pos);
	temp=start;
	while((pos-2)>0){
		temp=temp->next;
		pos--;
	}
	s=temp->next;
	temp->next=s->next;
	printf("\nDelted data is  : %d",s->data);
	free(s);
}

void sort_list(){
	struct Node *s,*temp;
	int sort;
	temp=start;
	 s=temp->next;
	//sort=s->data;
	while(temp!=NULL){
		 while(s->next!=NULL){
		 	if(s->data<temp->data){
		 		sort=temp->data;
		 		temp->data=s->data;
		 		s->data=sort;
			 }
			 s=s->next;
		 }
		 temp=temp->next;
}
printf("\nLinked List Sorted....\n");
}

void Search(){
	struct Node *temp;
	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	temp=start;
	while(temp!=NULL){
		if(temp->data==num){
			printf("\nData is Found : %d\n",temp->data);
			break;
		}
		temp=temp->next;
	}
	if(temp==NULL){
		printf("\nData is not Found");
	}
}

void Traverse(){
	struct Node *s;
	s=start;
	while(s!=NULL){
		 printf("%d -> ",s->data);
		s=s->next;
	}
	printf("NULL");
}

void count_node(){
	struct Node *s;
	int count=0;
	s=start;
	while(s!=NULL){
		count++;
		s=s->next;
	}
	printf("\n The total no of Nodes are : %d",count);	
}

void reverse(){
	struct Node *s,*temp ,*temp2;
	int i;
	s=temp2=NULL;
	temp=temp2=start->next;
	 
	 start->next=s;
	 while(temp!=NULL){
		 s=start;
		start=temp2;
		temp2=start->next;
		start->next=s;
	 
		 temp=temp->next;
	}	
}

void Feedback(){
	char li[9999];
	int choice;
	printf("\n\t\t\t******* Was this useful *********\n");
	printf("\n 1.  Very Beautiful");
	printf("\n 2. Excellent");
	printf("\n 3. Worse");
	printf("\n 4. Boring type");
	printf("\n 5. Write a Comment");
	printf("\n\nPlease enter your choice : ");
	scanf("%d",&choice);
	printf("\n\t\tYour Feedback :  ");
	switch(choice){
		case 1:
			printf("Very Beautiful.");
			break;
		case 2:
			printf("Excellent.");
			break;
		case 3:
			printf(" Worse.");
			break;
		case 4:
			printf("\nBoring type.");
			break;
		case 5:
		    printf("\n\t\t To write message : \n");
		    fflush(stdin);
			 gets(li);
			 fflush(stdin);
			 printf("\n\n\t\t %s",li);
			 			
	}
        printf("\n\n\n\t\t\t <<<<<<<<< THANKS FOR FEEDBACK >>>>>>>>>>>>>>>>>");
        printf("\n\n\n Press any key to continue...");
        getch();
}