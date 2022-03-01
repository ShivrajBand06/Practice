#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void showLL(struct Node * head){
    for(int i=0 ;head->next != NULL; i++){
        printf("The data at %d index in LL is %d\n",i,head->data);
        head = head->next;
    }
}
struct Node * createNode(struct Node * head, int data ,int index){
struct Node * new;
new->data= data;

if(index == 0){
    new->next = head;
    head = new;
}
else{
    struct Node * n = (struct Node*) malloc(sizeof(struct Node));
    struct Node * n1 = (struct Node*) malloc(sizeof(struct Node));
    n=head;
    n1 = head->next;
    for(int i=0; i<=index; i++){
        n= n->next;
        n1 = n1->next;
    }
    n->next = new;
    new->next = n1;
}
return head;

}

int main(){
    struct Node * head;
    struct Node * h1;
    struct Node * h2;
    struct Node * h3;
    struct Node * h4;

    head =(struct Node *) malloc(sizeof(struct Node)); 
    h1 =(struct Node *) malloc(sizeof(struct Node));
    h2 =(struct Node *) malloc(sizeof(struct Node));
    h3 =(struct Node *) malloc(sizeof(struct Node));
    h4 =(struct Node *) malloc(sizeof(struct Node)); 

    head->data=5;
    h1->data=51;
    h2->data=4;
    h3->data=2;
    h4->data=57;

    head->next = h1;
    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = NULL;
    showLL(head);
    createNode(head,12,1);
    printf("after insertion\n");
    showLL(head);
    return 0;
}