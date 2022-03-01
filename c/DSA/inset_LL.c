#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node * next;

};

void Tranvesal(struct Node *ptr){
while(ptr != NULL){
 printf("Element: %d\n",(ptr->data));
 ptr = ptr->next;  
}
}

struct Node * insertFirst(struct Node * head, int data){
    struct Node * ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head; 
    head=ptr;
    return head;
}

struct Node * AfterNode(struct Node * head, struct Node * prev_node, int data){
    struct Node * ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prev_node->next; 
    prev_node->next=ptr;
    return head;
}

struct Node * inBetween(struct Node * head, int data ,int index){
    struct Node * ptr;
    ptr= (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    
    struct Node * p=head;
    int i=0;
    while(i != index-1){
     p = p->next;
     i++;
    }
    ptr->next = p->next;
    p->next=ptr;
    return head;
}

struct Node * Atend(struct Node * head, int data){
 struct Node * ptr;
    ptr= (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    
    struct Node * p;
    while(p->next != NULL){
     p = p->next;
    }
    ptr->next = p->next;
    p->next=NULL;
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
    Forth->next = NULL;

    printf("Linkedlist before Insertion\n");    
    Tranvesal(head);
    printf("\nLinkedlist after Insertion\n");
   head = insertFirst(head,44);
   // head = AfterNode(head,Third,44);
   // head = inBetween(head,44,3);
   // head = Atend(head,44);

    Tranvesal(head);
    return 0;
}