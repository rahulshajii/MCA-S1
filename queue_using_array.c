#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front = 0, rear = -1;

int isEmpty() {
return front > rear;
}


int isFull() {
return rear == 4;  
}


void enqueue(int val) {
if (isFull()) {
printf("Queue is full!  %d\n", val);
} else {
rear++;
queue[rear] = val;
printf("%d enqueued to queue.\n", val);
}
}


void dequeue() {
if (isEmpty()) {
printf("Queue is empty!\n");
} else {
int dequeued_val = queue[front];
front++;
printf("Dequeued element: %d\n", dequeued_val);
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
printf("Queue elements:\n");
for (int i = front; i <= rear; i++) {
    printf("%d ", queue[i]);
}
printf("\n");
}
}


void main() {
int choice, val;

do {
printf("\n**** QUEUE MENU *****\n");
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
    case 5:exit(0);
        break;
        
    default:
        printf("Invalid choice \n");
}

} while (choice != 5);

}

