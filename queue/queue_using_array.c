#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int frontIndex;
    int backIndex;
    int *arr;
};

int isEmpty(struct queue *queue) {
    if (queue->frontIndex == queue->backIndex) {
        return 1;
    }

    return 0;
}

void pirntQueue(struct queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty");
    }
    else {
        int i = queue->frontIndex;
        for (i; i <= queue->backIndex; i++) {
            printf("\n%d", queue->arr[i]);
        }
    }
}

int isFull(struct queue *queue) {
    if (queue->frontIndex == queue->size-1) {
        return 1;
    }

    return 0;
}

void enqueue(struct queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue empty");
    }
    else {
        queue->backIndex = queue->backIndex + 1;
        queue->arr[queue->backIndex] = value;
    }
}

void dequeue(struct queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty");
    }
    else {

    }
}

int main() {
    struct queue q;
    q.size = 10;
    q.frontIndex = q.backIndex = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    return  0;
}