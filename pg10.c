#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node* next;
};

struct Node* head = NULL;

void insert_begin()
{
int val;
printf("\nEnter value: ");
scanf("%d", &val);
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = val;
newNode->next = head;
head = newNode;
printf("\n%d inserted at beginning.\n", val);
}

void insert_end()
{
int val;
printf("Enter value: ");
scanf("%d", &val);
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = val;
newNode->next = NULL;

if (head == NULL)
{
head = newNode;
}
else
{
struct Node* temp = head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}
printf("\n%d inserted at end.\n", val);
}

void delete_begin()
{
if (head == NULL)
{
printf("\nList is empty.\n");
return;
}
struct Node* temp = head;
head = head->next;
printf("%d deleted from beginning.\n", temp->data);
free(temp);
}

void delete_end()
{
if (head == NULL)
{
printf("\nList is empty.\n");
return;
}
if (head->next == NULL)
{
printf("\n%d deleted from end.\n", head->data);
free(head);
head = NULL;
return;
}
struct Node* temp = head;
struct Node* prev;
while (temp->next != NULL)
{
prev = temp;
temp = temp->next;
}
prev->next = NULL;
printf("\n%d deleted from end.\n", temp->data);
free(temp);
}

void display()
{
if (head == NULL)
{
printf("\nList is empty.\n");
return;
}
struct Node* temp = head;
printf("List: ");
while (temp != NULL)
{
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}

int main()
{
int choice;
while (1)
{
printf("\n1.Insert at beginning\n2.Insert at end\n3.Delete from beginning\n4.Delete from end\n5.Display\n6.Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:insert_begin();break;
case 2:insert_end();break;
case 3:delete_begin();break;
case 4:delete_end();break;
case 5:display();break;
case 6:exit(0);
default:
printf("Invalid choice\n");
}
}
return 0;
}

