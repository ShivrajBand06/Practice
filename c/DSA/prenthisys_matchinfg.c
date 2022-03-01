#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size)
    {
        return 1;
    }
    return 0;
}

void push(struct Stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack is Full, Unable to add element %c\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty, Unable to remove element\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *ex)
{
    struct Stack *sp;
    sp->top = -1;
    sp->size = strlen(ex);
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; ex[i] != '\0'; i++)
    {
        if (ex[i] == '(')
        {
            push(sp, '(');
        }
        else if (ex[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *exp = "(8+1)*9)";
    if (parenthesisMatch(exp))
    {
        printf("The Parenthsis is Matching\n");
    }
    else
    {
        printf("The Parenthsis  is not Matching\n");
    }
    return 0;
}