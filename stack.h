#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void push();
void pop();
int peek();
int isEmpty();
int isFull();
void display();
void clearStack();

#endif