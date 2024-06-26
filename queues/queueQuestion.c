//Write a program that creates and populates a queue with values. 
//Then print the total number of elements that are divisible by 3 but not by 5.

#include <stdio.h>
#include <stdlub.h>

#define MAX 10

typedef struct {
    int arr[MAX];
    int front,rear;
}Queue;

//Function to initialize the queue 

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

//Function to check if the queue is full
int isFull(Queue *q) {
    return ((q->rear+1)%MAX == q->front);
}

//Function to enqueue an element into the queue
void enqueue(Queue *q,int item) {
    if(isFull(q)){
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear+1)%MAX;
    q->arr[q->rear] = item;
}
//Function to dequeue an element from the queue
int dequeue(Queue *q) {
    if(isEmpty(q)) {
        printf("Queue Underflow\n");
        exit(1);
    }

    int item = q->arr[q->front];
    if(q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    }else {
        q->front = (q->front +1) % MAX;
    }
    return item;
}