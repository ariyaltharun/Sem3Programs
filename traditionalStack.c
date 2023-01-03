#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX_STACK_SIZE 100
int stack[MAX_STACK_SIZE], top=-1


bool isFull() {
    return top == capacity-1;
}

bool isEmpty() {
    return top == -1;
}

void push(int item) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } 
    stack[++top] = item;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow!!\n");
    } else {
        return stack[top--];
    }
}

void display() {
    for (int i=top; i>=0; i--)
        printf("%d\n", stack[i]);
}


int main() {
    printf("TRADITIONAL STACK\n");
   
    while (true) {
        printf("\nEnter the choice : \n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1: int item;
                    printf("Enter the element : ");
                    scanf("%d", &item);
                    push(item);
                    break;
            case 2: printf("Element popped : %d\n", pop());
                    break;
            case 3: printf("Elements in stack\n");
                    display();
                    break;
            case 4: exit(0);
            default: printf("INVALID CHOICE\n");
        }
    }

    return 0;
}
