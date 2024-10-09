#include <stdio.h>
#define SIZE 3

void push(char x);
void pop();
void display();

char stack[SIZE];
int top = -1;

int main() {
    int n;
    char ch;
    do {
        printf("\nEnter \n1 for push operation\n2 for pop operation\n3 to display the stack\n4 to exit\n");
        scanf("%d", &n);

        while (getchar() != '\n');

        switch (n) {
        case 1:
            printf("Enter element to push: ");
            scanf("%c", &ch);
            push(ch);
            break;
        case 2:
            printf("Top element will be popped!\n");
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    } while (n != 4);

    return 0;
}

void push(char x) {
    if (top == SIZE - 1) {
        printf("Stack is full\n");
    } else {
        stack[++top] = x;
        printf("%c pushed to stack\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%c popped from stack\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%c \n", stack[i]); // Print characters
        }
        printf("\n");
    }
}


