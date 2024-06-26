#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct stack_type {
    int arr[MAX];
    int top;
}Stack;

//Function to push an element onto the stack

void push(int item,Stack *ptr) {
    if(ptr->top == MAX-1) {
        printf("Overflow\n");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=item;
    }
}

// Function to pop an element from the stack

int pop(Stack *ptr) {
    int item;
    if(ptr->top<0) {
        printf("Underflow\n");
        exit(1);
    }
    else {
        item = ptr->arr[ptr->top];
        ptr->top--;
        printf("ELement popped\n");
    }
    return item;
}


//Function to display the stack

void display(Stack *ptr) { 
    printf("Stack: ");
    for(int i =0;i<=ptr->top;i++){
        printf("%d",ptr->arr[i]);
    }

    printf("\n");
}

int main() {
    Stack stack1, stack2, stack3;
    stack1.top = stack2.top = stack3.top = -1; // Initialize stack tops to -1
    
    // Populate stack 1
    for(int i = 0; i < MAX; i++) {
        push(i + 1, &stack1); // Corrected argument order
    }
    printf("Stack 1 populated.\n");
    display(&stack1);
    
    // Populate stack 2
    for(int i = 0; i < MAX; i++) {
        push((i + 1) * 10, &stack2); // Corrected argument order
    }
    printf("Stack 2 populated.\n");
    display(&stack2);
    
    // Copy elements from stack 1 to stack 3
    while(stack1.top >= 0) {
        push(pop(&stack1), &stack3); // Corrected argument order
    }
    
    // Copy elements from stack 2 to stack 3
    while(stack2.top >= 0) {
        push(pop(&stack2), &stack3); // Corrected argument order
    }
    
    printf("Elements copied from Stack 1 and Stack 2 to Stack 3.\n");
    display(&stack3);
    
    return 0;
}
