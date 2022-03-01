#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node * next;
};

void LinkedList_Traversal(struct Node * head){
    struct Node * ptr = head;
    do{
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

struct Node * Delete_first_node(struct Node * head){
    struct Node* p = head;
    struct Node * z = p->next;
    while(z->next != head){
        z= z->next;
    }
    head = p->next;
    z->next=head;
    free(p);
    return head;
}

struct Node * Delete_at_index(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for(int i=0; i<index-1; i++){
       p->next;
       q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node * Delete_at_Last(struct Node * head){
    struct Node * p = head;
    struct Node * q;
    while(p->next!=head){
        q = p;
        p = p->next;
    }
    q->next = head;
    free(p);
    return head;
}

struct Node * delete_at_index(struct Node * head, int value){
    struct Node * p= head;
    struct Node * q = head;
    while(q->data != value){
        q->next;
        p->next;
    }
    if(q->data == value){
        p->next= q->next;
        free(q);
    }
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
    
    Second->data = 8;
    Second->next = Third;
    
    Third->data = 12;
    Third->next = Forth;
    
    Forth->data = 16;
    Forth->next = head;

    printf("Linkedlist before Deletion\n");    
    LinkedList_Traversal(head);
    
    printf("\nLinkedlist after Deletion\n");
    //head = Delete_first_node(head);
    //head = Delete_at_index(head,2);
    //head = Delete_at_Last(head);
    head = delete_at_index(head,12);

    LinkedList_Traversal(head);
    
    return 0;
}
