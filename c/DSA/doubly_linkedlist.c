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
    }
    ptr=Tail;
    while(ptr != NULL){
        printf("Element is: %d\n", ptr->data);
        ptr= ptr->prev;
    }
    
}

struct Node * Insert_First_node(struct Node * head , int data){
    struct Node * ptr; 
    ptr= (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->prev=NULL;
    head->prev=ptr;
    
    ptr->next=head;
    head=ptr;
    
    return head;
}

struct Node * Insert_AtEnd(struct Node * head ,  int data){
    struct Node * ptr; 
    ptr= (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->prev=p;
    
    return head;
}

struct Node * Insert_in_between(struct Node * head, int data,int index){
    
    struct Node * ptr;
    ptr= (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node * p = head;
    struct Node * q = head->next;

    for(int i = 0; i < index-1; i++){
     p = p->next;
     q = q->next;
    }

    ptr->next=q;
    p->next=ptr;
    q->prev=ptr;
    ptr->prev=p;

    return head;
}
struct Node * Insert_After_node(struct Node * head, struct Node * prevnode, int data){
    struct Node * ptr;
    ptr = (struct Node*) malloc(sizeof(struct Node *));
    ptr->data=data;
    struct Node * q = prevnode->next;

    ptr->next=q;
    prevnode->next=ptr;
    q->prev=ptr;
    ptr->prev=prevnode;
    return head ;
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
    printf("LinkedList before Insertion\n");
    Linkedlist_traversal(head,Tail);
    //head= Insert_First_node(head,44);
    //head= Insert_in_between(head,44,3);
    //head= Insert_AtEnd(head,44);
    head= Insert_After_node(head,Third,44);


    printf("\nLinkedList after Insertion\n");
    Linkedlist_traversal(head,Tail);

    return 0;
}