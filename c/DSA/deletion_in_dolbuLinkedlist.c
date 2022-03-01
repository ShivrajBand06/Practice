#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void Linkedlist_traversal(struct Node * head, struct Node * Tail ){
    struct Node * ptr = head;
    while(ptr != NULL){
        printf("Element is: %d\n", ptr->data);
        ptr= ptr->next;
    }/*
    ptr=Tail;
    while(ptr != NULL){
        printf("Element is: %d\n", ptr->data);
        ptr= ptr->prev;
    }*/
}
    
struct Node * Delete_first(struct Node * head){
    struct Node * p= head;
    head=head->next;
    head->prev=NULL;
    free(p);
    return head;
}
struct Node * Delete_at_index(struct Node * head, int index){
     struct Node * p = head;
     struct Node * q = head->next;
     struct Node * z;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    z=q->next;
    p->next=z;
    z->prev=p;
    free(q);
    return head;
 }
struct Node * Delete_value(struct Node * head, int value){
     struct Node * p = head;
     struct Node * q = head->next;
     struct Node * z;
     while(q->data != value && q->next != NULL){
         p=p->next;
         q=q->next;
     }
    z=q->next;
    p->next=z;
    z->prev=p;
    free(q);
    return head;  
 }
struct Node * Delete_Last_Node(struct Node * head){
    struct Node * p= head;
    struct Node * q = p->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    free(q);
    p->next=NULL;
    return head;
}
 
int main(){
    struct Node * head;
    struct Node * Second;
    struct Node * Third;
    struct Node * Tail;

    head = (struct Node *) malloc(sizeof(struct Node));
    Second = (struct Node *) malloc(sizeof(struct Node));
    Third = (struct Node *) malloc(sizeof(struct Node));
    Tail = (struct Node *) malloc(sizeof(struct Node));

    

    head->data = 7;
    head->next = Second;
    head->prev=NULL;

    Second->data = 8;
    Second->next = Third;
    Second->prev=head;

    Third->data = 9;
    Third->next = Tail;
    Third->prev=Second;

    Tail->data = 11;
    Tail->next = NULL;
    Tail->prev=Third;
    printf("LinkedList before Deletion\n");
    Linkedlist_traversal(head,Tail);
    //head = Delete_first(head);
    //head= Delete_at_index(head,1);
    //head= Delete_value(head,8);
    head= Delete_Last_Node(head);


    printf("\nLinkedList after Deletion\n");
    Linkedlist_traversal(head,Tail);

    return 0;
}