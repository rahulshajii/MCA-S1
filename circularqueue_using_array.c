#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front=-1,rear=-1;

int isFull() {
return ((rear + 1) % 5 == front);
}

int isEmpty() {
return (front == -1);

}

void enqueue(int val) {
if (isFull()) {
printf("Queue Overflow! Cannot insert %d\n", val);
} else {
if (front == -1)  
    front = 0;
rear = (rear + 1) % 5;
queue[rear] = val;
printf("%d enqueued to queue.\n", val);
}
}

void dequeue() {
if (isEmpty()) {
printf("Queue Underflow! Queue is empty.\n");
} else {
int val = queue[front];
if (front == rear) {
    
    front = rear = -1;
} else {
    front = (front + 1) % 5;
}
printf("Dequeued element: %d\n", val);
}
}


void peek() {
if (isEmpty()) {
printf("Queue is empty! No front element.\n");
} else {
printf("Front element: %d\n", queue[front]);
}
}
void display() {
if (isEmpty()) {
printf("Queue is empty!\n");
} else {
printf("Queue elements: ");
int i = front;
while (1) {
    printf("%d ", queue[i]);
    if (i == rear)
        break;
    i = (i + 1) % 5;
}
printf("\n");
}
}



void  main() {
int choice, val;

do {
printf("\nCIRCULAR QUEUE MENU\n");
printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. Peek\n");
printf("4. Display\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) {
    case 1:
        printf("Enter value to enqueue: ");
        scanf("%d", &val);
        enqueue(val);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        peek();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf("Invalid choice! Please try again.\n");
}
} while (choice != 5);

}
