#include "stack.h"

Node* top = NULL;

void push() {
    if (isFull()) {
        printf("Stack Overflow (Memory Full)\n");
        return;
    }

    Node* temp = (Node*)malloc(sizeof(Node));
    
    printf("Enter data to push: ");
    scanf("%d", &temp->data);

    temp->next = top;
    top = temp;

    printf("%d is pushed into stack\n", temp->data);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow (Empty)\n");
        return;
    }

    Node* temp = top;
    printf("%d is popped from stack\n", temp->data);

    top = top->next;
    free(temp);
}

int peek() {
    return top->data;
}

int isEmpty() {
    return (top == NULL);
}

int isFull() {
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL) {
        return 1;
    }
    free(temp);
    return 0;
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    Node* current = top;
    printf("Stack elements (Top to Bottom):\n");

    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void clearStack() {
    while (!isEmpty()) {
        Node* temp = top;
        top = top->next;
        free(temp);
    }
}