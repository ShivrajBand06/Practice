#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

void Stack_traversal(struct Stack *ptr)
{
    printf("Elements in Stack are:\n");
    for (int i = ptr->top; i >= 0; i--)
    {
        printf("%d\n", ptr->arr[i]);
    }
}
int Stack_is_empty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int Stack_is_Full(struct Stack *ptr)
{
    if (ptr->top == ptr->size)
    {
        return 1;
    }
    return 0;
}

void push(struct Stack *ptr, int val)
{
    if (Stack_is_Full(ptr))
    {
        printf("Stack is Full, Unable to add %d in stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct Stack *ptr)
{
    if (Stack_is_empty(ptr))
    {
        printf("Stack is Empty\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct Stack * ptr, int i){
    if((ptr->top-i+1)<0){
        printf("Invalid position");
        return -1;
    }
    return ptr->arr[ptr->top-i+1];
}
int stackTop(struct Stack* ptr){
    return ptr->arr[ptr->top];
}
int stack_bottom(struct Stack* ptr){
    return ptr->arr[0];
}

int main()
{
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack created Sucessfully\n");

    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);
    Stack_traversal(sp);
    printf("Element %d is poped from stack\n", pop(sp));
    printf("Element %d is poped from stack\n\n", pop(sp));

    Stack_traversal(sp);

    for(int i =1; i<sp->top+2;i++){
        printf("The element at %d position is %d\n",i,peek(sp,i));
    }
    printf("The top element of stack is %d\n",stackTop(sp));
    printf("The bottom element of stack is %d\n",stack_bottom(sp));

    return 0;
}