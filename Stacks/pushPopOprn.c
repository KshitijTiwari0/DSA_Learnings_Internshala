#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct stack_type {
    int arr[MAX];
    int top;
} node;

// Function to push an element onto the stack
void push(int item, node *ptr) {
    if(ptr->top == MAX-1) {
        printf("Overflow\n");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = item;
    }
}

// Function to pop an element from the stack
int pop(node *ptr) {
    int item;
    if(ptr->top < 0) {
        printf("Underflow\n");
        exit(1);
    }
    else {
        item = ptr->arr[ptr->top];
        ptr->top--;
        printf("Element popped\n");
    }
    return item;
}

int main() {
    node stack;
    stack.top = -1; // Initialize stack top to -1

    // Pushing elements onto the stack
    push(45, &stack);
    printf("Pushing elements:%d\n", stack.arr[0]);
    push(2, &stack);
    push(3, &stack);
    push(4, &stack);
    push(5, &stack);
    
    // Trying to push more than the stack capacity to test overflow condition
    push(6, &stack);
    
    // Popping elements from the stack
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    
    // Trying to pop more elements than the stack contains to test underflow condition
    printf("Popped element: %d\n", pop(&stack));

    return 0;
}
