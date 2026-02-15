#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    int choice;

    printf("=== STACK PROGRAM (Split File Version) ===\n");

    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek (Top)\n");
        printf("4. Is Empty\n");
        printf("5. Is Full\n");
        printf("6. Display Stack\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("=============================\n");

        switch (choice) {
            case 1:
                push(); 
                break;

            case 2:
                pop();
                break;

            case 3:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Top element: %d\n", peek());
                }
                break;

            case 4:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;

            case 5:
                if (isFull()) {
                    printf("Stack Overflow (Memory Full)\n");
                } else {
                    printf("Stack is not full\n");
                }
                break;

            case 6:
                display();
                break;

            case 7:
                clearStack();
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }

        printf("=============================\n\n");
    }

    return 0;
}