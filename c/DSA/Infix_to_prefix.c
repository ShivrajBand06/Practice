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
        printf("Stack is full, Unable to add %c\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty, Unable to pop out element");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char stackTop(struct Stack *ptr)
{
    return ptr->arr[ptr->top];
}

int Precedence(char ch)
{
    if (ch == '/' || ch == '*')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    return 0;
}

int isOperator(char ch)
{
    if (ch == '/' || ch == '*' || ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char * InfixToPrefix(char * infix)
{
    struct Stack * s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = strlen(infix);
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char *Prefix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = strlen(infix)-1;
    int j = strlen(infix)-1;
    

    while (i >= 0)
    {
        if (!isOperator(infix[i]))
        {
            Prefix[j] = infix[i];
            i--;
            j--;
        }
        else
        {
            if (Precedence(infix[i]) > Precedence(stackTop(s)))
            {
                push(s, infix[i]);
                i--;
            }
            else
            {
                Prefix[j] = pop(s);
                j--;
            }
        }
    }
    while (!isEmpty(s))
    {
        Prefix[j] = pop(s);
        j--;
    }
    j = strlen(infix);
    Prefix[j] = '\0';
    return Prefix;
}

int main()
{
    char *infix = "x-y*z";
    printf("Prefix is %s", InfixToPrefix(infix));
    return 0;
}