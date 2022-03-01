#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};

void LinkedList_Traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node * top){
    if(top==NULL){
        return 1;
    }
    return 0;
}

int isFull(struct Node * top){
    struct Node *  ptr= (struct Node*) malloc(sizeof(struct Node));
    if(ptr==NULL){
        return 1;
    }
    return 0;
}

struct Node * push(struct Node * top, int val){
    if(isFull(top)){
     printf("Stack is Full, Unable to add an element %d", val);
    }
    else{
     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data= val;
     ptr->next=top;
     top=ptr;
     return top;
    }
}

int pop(struct Node ** top){
    if(isEmpty(*top)){
        printf("Stack is Empty");
    }
    else{
        struct Node * n = (*top);
        int x = n->data;
        (*top) = (*top)->next;
        free(n);
        return x;

    }
}

int peek(struct Node* top, int position){
    struct Node * ptr = top;
    for(int i=0;(i<position-1 && ptr != NULL);i++){
        ptr = ptr->next;
    }
    if(ptr != NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int StackTop(struct Node * top){
    return top->data;
}

int StackBottom(struct Node * top){
    struct Node * p = top;
    while(p->next != NULL){
        p = p->next;
    }
    return p->data;
}
int main(){
    struct Node * top = NULL;
    top = push(top, 85);
    top = push(top, 5);
    top = push(top, 70);
    top = push(top, 8);
    top = push(top, 845);
    top = push(top, 46);
    top = push(top, 87);
    printf("\n");
    LinkedList_Traversal(top);

    printf("%d Element is Poped from stack\n",pop(&top));
    printf("%d Element is Poped from stack\n\n",pop(&top));
    LinkedList_Traversal(top);
    printf("\n");


    for(int i=1; i<=5; i++){
        printf("Element at %d position is %d\n", i, peek(top, i) );
    }
    printf("\nElement at Stack Top is %d\n", StackTop(top));
    printf("Element at Stack bottom is %d\n", StackBottom(top));
    
    return 0;
}