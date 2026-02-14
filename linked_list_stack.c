#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* top = NULL;

void push();
void pop();
int peek();
int isEmpty();

int main(){
    int choice = 0;
    printf("=== STACK PROGRAM ===\n\n");
    while(1){
        printf("1. Push\n");
        printf("2 Pop\n");
        printf("3. Exit\n");
        printf("Enter your choice: "); scanf("%d", &choice);

        switch(choice){
            case 1:
                    printf("=======================\n");
                    push();
                    break;
            case 2:
                    printf("=======================\n");
                    pop();
                    break;
            case 3:
                    printf("=======================\n");
                    if(isEmpty()){
                        printf("Stack is empty\n");
                    }else{
                        printf("Stack is not empty\n");
                    }
                    break;

                    case 4:
                        printf("=======================\n");
                        printf("Top element: %d\n", peek());
                    break;
            case 5:
                    exit(0);
        }printf("=======================\n");
        
    }
    
}

void push(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter data to push: "); scanf("%d", &temp->data);
    printf("%d is pushed\n", temp->data);
    temp->link = top;
    top = temp;
}

void pop(){
    struct node* temp;
    if(top == NULL){
        printf("stack is underflow\n");
    }else{
        temp = top;
        printf("%d is popped\n", temp->data);
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

int peek(){
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

int isEmpty(){
    return top == NULL;
}
