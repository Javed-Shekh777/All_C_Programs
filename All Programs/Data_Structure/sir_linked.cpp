/* Program of Singly Linked List using Pointer. */

// Header Files.
#include<stdio.h>
#include<stdlib.h>

// Linked List Node Definition.
struct node
{
  int info;
  struct node *link;
};
struct node *start;

// Prototype of Functions.
void Create_List(int);
void Add_At_Beg(int);
void Add_In_Bet(int,int);
void Add_At_Last(int);
void Delete_First_Node();
void Delete_In_Between_Node(int);
void Delete_Last_Node();
void Display();
void Count();
void Reverse();
int Search(int);

// Definition of Function main.
int main()
{
  int choice,item,pos,n,i,t;
  start=NULL;
  while(1)   // condition is always true so that it should loop through until user quits.
  {
    printf("\n1: Create List.");
    printf("\n2: Add at Begining.");
    printf("\n3: Add in Between.");
    printf("\n4: Add at End.");
    printf("\n5: Delete First Node.");
    printf("\n6: Delete in Between.");
    printf("\n7: Delete Last Node.");
    printf("\n8: Display.");
    printf("\n9: Count.");
    printf("\n10: Reverse.");
    printf("\n11: Search.");
    printf("\n12: Quit.");
    printf("\nPlease Enter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("\nPlease Enter the number of elements in the list:");
              scanf("%d",&n); 
              for(i=0;i<n;i++)
              {
                printf("\nEnter Element %d : ",i+1); 
                scanf("%d",&t);
                Create_List(t);
              }
              break;
      case 2: printf("\nEnter the element to add at the begining of list:");
              scanf("%d",&item);
              Add_At_Beg(item);
              break;
      case 3: printf("\nEnter the element to add in between the list:");
              scanf("%d",&item);
              printf("\nAlso Enter the position where u want to enter:");
              scanf("%d",&pos);
              Add_In_Bet(item,pos);
              break;
      case 4: printf("\nEnter the element to add at the last of list:");
              scanf("%d",&item);
              Add_At_Last(item);
              break;
      case 5: Delete_First_Node();
              break;
      case 6: printf("\nEnter the element which u want to delete from the list:");
              scanf("%d",&item);
              Delete_In_Between_Node(item);
              break;
      case 7: Delete_Last_Node();
              break;
      case 8: Display();
              break;
      case 9: Count();
              break;
      case 10: Reverse();
              break;
      case 11: printf("\nEnter element to be searched:");
              scanf("\n%d",&item);
              pos=Search(item);
              if(pos==0)
              printf("\nSorry item is not found in the list.");
              else
              printf("\nElement is found in the list at position %d",pos);
              break; 
      case 12: exit(0);
              break; 
    }  // End of Switch.
  }  // End of While.
  return 0;
}  // End of main.

// Definition of function Create_List().
void Create_List(int item)
{
  struct node *temp,*q;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=item;
  temp->link=NULL;
  
  if(start==NULL) // Inseting the first node in the linked list.
  {
    start=temp;
  }
  else     // Element inserted at the end of the list.
  {
    q=start;
    while(q->link!=NULL)   // Reaching the last node.
    {
       q=q->link;
    }
    q->link=temp;
  }
}  // End of the Create_List().

// Definition of fuction Add_At_Beg().
void Add_At_Beg(int t)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));     // Allocating memory to temp node through malloc function.
  temp->info=t;
  temp->link=start;
  start=temp;
}

// Definition of function Add_In_Bet().
void Add_In_Bet(int t, int p)
{
   int m;
   m=p;
   struct node *temp,*temp1;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->info=t;
   temp->link=NULL;
   temp1=start;
   while((p-2)>0)    // while loop is used to reach at position where u want to insert an element.
   { 
      if(temp1==NULL)    // if your inserting position is greater than the link list length.
      {
       printf("\nThere are less than %d elements",m);
       return;
      }
      temp1=temp1->link;
      p--;
   } 
   temp->link=temp1->link;
   temp1->link=temp;
   return;
}

// Definition of function Add_At_Last().
void Add_At_Last(int t)
{
   struct node *temp,*temp1;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->info=t;
   temp->link=NULL;
   temp1=start;
   while(temp1->link!=NULL)    // while loop is used to reach at position where u want to insert an element.
   { 
      temp1=temp1->link;
   } 
   temp1->link=temp;
   return;
}

// Definition of function Delete_First_Node().
void Delete_First_Node()
{
   struct node *temp;
   temp=start;
   start=start->link;
   free(temp);   // free the memory of deleted element.
   return;
}
// Definition of function Delete_In_Between_Node().
void Delete_In_Between_Node(int d)
{
   struct node *temp,*q;
   if(start->info==d)    // if First element deleted.
   {
     temp=start;
     start=start->link;
     free(temp);
     return;
   }
   int p,i;
   p=Search(d);   // Search function will return the position of element in the list which u want to delete.
   if(p==0)
   {
     printf("\nElement is not present in the List.");
     return;
   }
   q=start;
   for(i=1;i<p-1;i++)  // for loop is used to reach at position one node before the deleted node.
   {  
     q=q->link;
   }
   temp=q->link;
   q->link=(q->link)->link; 
   free(temp);   // free the memory of deleted element.
   return;
}
// Definition of function Delete_Last_Node().
void Delete_Last_Node()
{
   struct node *temp,*temp1;
   temp=start;
   while(temp->link!=NULL)
   {
                          temp1=temp;  // temp1 pointer will point the second last node.
                          temp=temp->link;
   }
   temp1->link=NULL;
   free(temp);   // free the memory of deleted element.
   return;
}
// Definition of function Display().
void Display()
{
  struct node *q;
  if(start==NULL)   // if the list is empty.
  {
  printf("\nSorry List is Empty.");
  return;
  }
    q=start;
    printf("\n");
    while(q!=NULL)      // Printing the node value till the last node.
    {
       printf("%d -> ",q->info);
       q=q->link;
    }
    printf("NULL");
    printf("\n");
} // End of Display() function;

// Definition of function Count().
void Count()
{
  struct node *q;
  int t=0;
  if(start==NULL)
   printf("\nList is Empty.");
  else
  {
     q=start;
     while(q!=NULL)     // while loop is used to count the node.
      {
        t++;
        q=q->link;
      }
    printf("\nList has %d elements.",t);
  }
}

// Definition of function Reverse().
void Reverse()
{
  struct node *p1,*p2,*p3;    // p1,p2,p3 pointers are used to point the first three node of the list.
  p1=start;
  p2=start->link;
  p3=p2->link;
  p2->link=p1;
  p1->link=NULL;
  while(p3!=NULL)      // reversing the Linked List.
  { 
    p1=p2;
    p2=p3;
    p3=p3->link;
    p2->link=p1;
  }
  start=p2;
}

// Definition of function Search().
int Search(int s)
{
  struct node *q;
  int t=0;
  q=start;
  while(q!=NULL)  // Looping through the linked list.
  {
    t++;
    if((q->info)==s)
     {
       return t;       // when element is found returning its position from start.
     }
    q=q->link;
  }
  return 0;     // when element not found returning 0.
}