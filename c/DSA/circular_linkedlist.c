#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void LinkedlistTraversal(struct Node * head){
struct Node * ptr = head;
    do{
        printf("Element is: %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

struct Node * Insert_at_first(struct Node * head, int data){
    struct Node * ptr;
    ptr = (struct Node *) malloc (sizeof(struct Node));

    ptr->data = data;
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node * Insert_Inbetween(struct Node * head, int data, int index){
    struct Node * ptr;
    ptr = (struct Node *) malloc (sizeof(struct Node));

    ptr->data = data;
    struct Node * p = head;
    int i =0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next=ptr;
    return head;
}

struct Node * Insert_atLast(struct Node * head, int data){
    struct Node * ptr;
    ptr = (struct Node *) malloc (sizeof(struct Node));

    ptr->data = data;
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}


struct Node * Insert_after_node(struct Node * head, struct Node * prev,  int data){
    struct Node * ptr;
    ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next = prev->next;
    prev->next= ptr;
    return head;
}

int main(){
    struct Node * head;
    struct Node * Second;
    struct Node * Third;
    struct Node * Forth;

    head = (struct Node *) malloc(sizeof(struct Node));
    Second = (struct Node *) malloc(sizeof(struct Node));
    Third = (struct Node *) malloc(sizeof(struct Node));
    Forth = (struct Node *) malloc(sizeof(struct Node));


    head->data = 4;
    head->next = Second;
    
    Second->data = 9;
    Second->next = Third;
    
    Third->data = 36;
    Third->next = Forth;
    
    Forth->data = 45;
    Forth->next = head;

    printf("Linkedlist before Insertion\n");    
    LinkedlistTraversal(head);
    
    printf("\nLinkedlist after Insertion\n");
    head = Insert_atLast(head,44);
   //head = Insert_after_node(head,Second,44);
   // head = Insert_Inbetween(head,44,3);
    head = Insert_at_first(head,44);

    LinkedlistTraversal(head);
    return 0;
}