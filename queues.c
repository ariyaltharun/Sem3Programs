/*  Program to implement queues */

#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1, size, *queue;


void qinit(int size) {
	queue = malloc(size*sizeof(int));
}


void push(int item) {
	if (rear == size)
		fprintf(stderr, "QUEUE IS FULL\n");
	else
		queue[++rear] = item;
}


int pop() {
	if (front == rear)
		fprintf(stderr, "QUEUE IS EMPTY\n");
	else
		return queue[++front];
}


void display() {
	printf("\n");
	for (int i=front+1; i<=rear; i++)
		printf("%d\n", queue[i]);
}

int main() {
	int temp, item;
	printf("Enter the size of the stack : ");
	scanf("%d", &size);

	qinit(size);
	while(1) {
		printf("Enter the shoice\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf("%d", &temp);
		switch (temp) {
			case 1: printf("Enter an element : ");
				scanf("%d", &item);
				push(item);
				break;
			case 2: printf("Popped element = %d\n", pop());
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default : printf("INVALID CHOICE\n");
		}
	}
	return 0;
}
