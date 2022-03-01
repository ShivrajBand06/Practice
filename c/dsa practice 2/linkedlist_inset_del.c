#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Travelsal(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}



struct Node *insertion(int data, int index, struct Node *head)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    if (index == 1)
    {
        new->next = head;
        head = new;
        return head;
    }
    else
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr = head;
        int i = 2;
        while (i < index)
        {
            ptr = ptr->next;
            i += 1;
        }
        new->next = ptr->next;
        ptr->next = new;
        return head;
    }
}

struct Node * deleteNode(struct Node * head,  int node_no){
    if(node_no == 1){
        struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
    }
    else{
    struct Node * ptr = (struct Node *) malloc( sizeof(struct Node));
    struct Node * ptr1 = (struct Node *) malloc( sizeof(struct Node));
    ptr = head;
    ptr1 = head->next;
    int i=2;
    while(i<node_no){
        ptr = ptr->next;
        ptr1 = ptr1->next;
        i+=1;
    }
    ptr->next = ptr1->next;
    free(ptr1);
    return(head);
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *h1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *h2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *h3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *h4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *h5 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *h6 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = h1;
    h1->data = 5;
    h1->next = h2;
    h2->data = 4;
    h2->next = h3;
    h3->data = 485;
    h3->next = h4;
    h4->data = 452;
    h4->next = h5;
    h5->data = 405;
    h5->next = h6;
    h6->data = 415;
    h6->next = NULL;
    Travelsal(head);
    
    head = insertion(12,1,head);
    printf("\n\n");
    Travelsal(head);
    
    head = deleteNode(head,7);
    printf("\n\n");
    Travelsal(head);
    return 0;
}