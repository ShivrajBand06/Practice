#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void Linkelisttraversal(struct Node *ptr)
{
    printf("Printing element of queue\n");
    while (ptr != NULL)
    {
        printf("Elements in queue are: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full Unable to add %d in queue\n", val);
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct Node *ptr = f;
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    Linkelisttraversal(f);
    printf("Dequeuing element %d\n", dequeue());

    enqueue(4);
    enqueue(5);
    enqueue(4);
    enqueue(8);
    enqueue(9);
    Linkelisttraversal(f);

    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    Linkelisttraversal(f);

    return 0;
}