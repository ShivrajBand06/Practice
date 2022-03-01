#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;

};

void LinkedlistTraversal(struct Node * ptr){
    while(ptr != NULL){
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node * Deletehead(struct Node * head){
    struct Node * p = head;
    head = head->next;
    free(p);
    return head;    
}

struct Node * Delete_at_Index(struct Node * head, int index){
    struct Node * p=head;
    struct Node * q=head->next;
    for(int i=0; i<index-1 ; i++){
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
    free(q);
    return(head);
}

struct Node * Delete_at_End(struct Node * head){
    struct Node * p=head;
    struct Node * q=head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next=NULL;
    free(q);
    return(head);
}

struct Node * delete_at_Index(struct Node * head, int value){
    struct Node * p=head;
    struct Node * q=head->next;

    while(q->data!=value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
    p->next=q->next;
    free(q);
    }
    return(head);
}



int main(){
    struct Node * head = (struct Node *) malloc(sizeof(struct Node));
    struct Node * scnd = (struct Node *) malloc(sizeof(struct Node));
    struct Node * thrd = (struct Node *) malloc(sizeof(struct Node));
    struct Node * frth = (struct Node *) malloc(sizeof(struct Node));
    struct Node * ffth = (struct Node *) malloc(sizeof(struct Node));


    head->data=12;
    head->next=scnd;
    scnd->data=24;
    scnd->next=thrd;
    thrd->data=36;
    thrd->next=frth;
    frth->data=48;
    frth->next=ffth;
    ffth->data=60;
    ffth->next=NULL;

    printf("Linkedlist Before Deletion \n");
    LinkedlistTraversal(head);
    //head= Deletehead(head);
    //head= Delete_at_Index(head,4);
    //head= delete_at_Index(head,48);
    head= Delete_at_End(head);


    printf("\n\nLinkedlist After Deletion \n");
    LinkedlistTraversal(head);
    
    return 0;
}