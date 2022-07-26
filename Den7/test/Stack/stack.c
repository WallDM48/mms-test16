#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int *stack_arr;
    int elem_count;
    int max_elem_count;
} stack;

void push(stack* stack_p, int newElem){
    if (stack_p->elem_count == stack_p->max_elem_count) {
        perror("Push: Stack is full\n");
        return;
    } 
    stack_p->stack_arr[stack_p->elem_count++] = newElem;
}
void pop(stack* stack_p){
    if (stack_p->elem_count == 0) {
        perror("Pop: Stack is empty\n");
        return;
    } 
    stack_p->elem_count--;
}
void printStack(stack* stack_p){
    for (int i = 0; i < stack_p->elem_count; i++) {
        printf("%d ", stack_p->stack_arr[i]); 
    } 
    putchar('\n');
}
stack createStack(int maxElement){
    stack stack1;
    stack1.elem_count = 0;
    stack1.max_elem_count = maxElement;
    stack1.stack_arr = malloc(sizeof(int)*maxElement);
    if (!stack1.stack_arr){
        perror("Stack creation: Malloc failed\n");
        exit(-1);
    }
    return stack1;    
}
stack* createDynamicStack(int maxElement){
    stack* stack1 = malloc(sizeof(stack));
    if (!stack1){
        perror("Stack creation: Malloc failed\n");
        exit(-1);
    }
    stack1->elem_count = 0;
    stack1->max_elem_count = maxElement;
    stack1->stack_arr = malloc(sizeof(int)*maxElement);
    if (!stack1->stack_arr){
        perror("Stack creation: Malloc failed\n");
        exit(-1);
    }
    return stack1;
}

int main(){
    stack* stack1 = createDynamicStack(250);
    push(stack1, 100);
    push(stack1, 200);
    push(stack1, 300);
    pop(stack1);
    push(stack1, 400);
    printStack(stack1);
    free(stack1->stack_arr);
    free(stack1);
    return 0;
}