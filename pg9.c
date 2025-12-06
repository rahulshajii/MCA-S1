#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node * front = NULL;
struct Node * rear = NULL;

int isempty()
{
	return  front == NULL;
}

void enqueue()
{

int value;
struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	if(newNode == NULL)
	{
	printf("\n*QUEUE IS FULL*\n");
	}
	else
	{
	printf("\nEnter the item to push:");
	scanf("%d",&value);

	newNode->data=value;
	newNode->next=NULL;
	                                                  
	if(rear == NULL)
	{
	front=rear=newNode;
	}
	else
	{
	rear->next=newNode;
	rear=newNode;
	}
	printf("\n%d is Entered\n",value);
	}
}

void dequeue()
{
	if(isempty())
	{
	printf("\n*QEUEUE UNDERFLOW*\n");
	}
	else
	{
	struct Node * temp=front;
	printf("\n%d is Deleted from Queue\n\n",front->data);
	
	front=front->next;
	
	if (front == NULL)
	{
        rear = NULL;
        }
	free(temp);
	}	
}


void display()
{
	if(isempty())
	{
	printf("\n*Queue is EMPTY*\n");
	}
	else
	{
	struct Node* temp = front; 
	printf("\n*DISPLAY Queue*\n");
	printf("\n*---------------*\n");
	while(temp != NULL)
	{
	printf("%d ",temp->data);
	temp=temp->next;
	}
	printf("\n*---------------*\n");
	}
}

int main()
{
int value,ch;

while(1)
{
printf("\n\nQueue Menu\n--------------\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nSelect The Choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1 : enqueue();
	 break;
case 2 : dequeue();
	 break;
case 3 : display();break;

case 4 : printf("Exit....");
	return 0;
	break;
default : printf("INVALID OPERATION");break;
}

}
}



