#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top = -1;

int isEmpty() {
return top == -1;
}


int isFull() {
return top == 4;  
}


void push(int val) {
if (isFull()) {
printf("Stack Overflow!%d\n", val);

}
else{
top++;
stack[top] = val;
printf("%d pushed to stack.\n", val);
}
}


void pop() {
if (isEmpty()) {
printf("Stack Underflow!\n");
}
else{
int popped_val = stack[top];
top--;
printf("Popped element: %d\n", popped_val);
}
}


void peek() {
if (isEmpty()) {
printf("Stack is empty!\n");
return;
}
printf("Top element: %d\n", stack[top]);
}


void display() {
if (isEmpty()) {
printf("Stack is empty!\n");

}
else{
printf("Stack elements (top to bottom):\n");
for (int i = top; i >= 0; i--) {
printf("%d\n", stack[i]);
}
}
}


int main() {
int choice, val;

do {
    printf("\n**** STACK MENU *****\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5: exit(0);
             break;
            
               
        default:
            printf("Invalid choice! \n");
    }

} while (choice != 5);

}

