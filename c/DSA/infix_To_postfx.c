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

char * InfixToPostfix(char * infix)
{
    struct Stack * s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = strlen(infix);
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char *Postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            Postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (Precedence(infix[i]) > Precedence(stackTop(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                Postfix[j] = pop(s);
                j++;
            }
        }
    }
    while (!isEmpty(s))
    {
        Postfix[j] = pop(s);
        j++;
    }
    Postfix[j] = '\0';
    return Postfix;
}

int main()
{
    char *infix = "m-n*p+q";
    printf("Postfix is %s", InfixToPostfix(infix));
    return 0;
}