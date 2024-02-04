#include<stdio.h>
#include<stdlib.h>

struct node {
    int data; 
    struct node *next;
};

int  isEmpty(struct node *top) {
    if (top == NULL) {
        return 1;
    }

    return 0;
}

void printStack(struct node* top) {
    if  (isEmpty(top)){
        printf("stack empty");
        return;
    }
    while(top != NULL){
        printf("\n%d",top->data);
        top = top->next;
    }
}

int isFull(struct node *top) {
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL) {
        printf("stack full");
        return  1;
    }

    free(p);
    return 0;
}

struct node* push(struct node* top, int value) {
    if (isFull(top)) {
        printf("Stack full");
    }
    else {
        struct node *newTop =  (struct node*)malloc(sizeof(struct node));
        newTop->data = value; 
        newTop->next = top;
        top = newTop;
    }
    
    return top;
}

struct node* pop(struct node* top) {
    if (isEmpty(top)) {
        printf("Stack empty");
    }
    else {
        struct  node *value = top;
        top = top->next;
        free(value);
    }

    return top;
}



int  main() {
    struct node *top = NULL;
    top = push(top, 10);
    top = push(top, 100);
    top = push(top, 1000);
    top = push(top, 1222);
    printStack(top);
    top = pop(top);
    top = pop(top);
    printStack(top);
}
