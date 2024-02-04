#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

void printStack(struct stack *ptr){
    printf("\n");
    int i = 0; 
    while(i <= ptr->top) {
        printf("%d\n", ptr->arr[i]);
        i++;
    }
}

int isEmpty(struct stack* ptr) {
    if (ptr->top == -1) {
        return 1;
    }

    return 0;
}

int isFull(struct stack *ptr) {
    if (ptr->top == ptr->size-1) {
        return 1;
    }

    return 0;
}

void push(int value, struct stack *ptr) {
    if (isFull(ptr) == 1) {
        printf("stack is full, cannot push %d", value);
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("pushed to stack\n");
    }
}

void pop(struct stack *ptr) {
    if (isEmpty(ptr) == 1) {
        printf("Cannot pop, stack empty\n");
    }
    else {
        ptr->top--;
        printf("popped from stack");
    }
}



int main() {
    struct stack *s;
    s->size = 4;
    s->top  = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    printf("Hi here is the code\n");
    push(10, s);
    push(11, s);
    push(199, s);
    push(123, s);
    push(234, s);
    push(1345, s);
    push(1345, s);
    printStack(s);
    pop(s);
    printStack(s);
    printf("\n");
    return 0;
}