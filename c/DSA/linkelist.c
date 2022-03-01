#include<stdio.h>
#include<stdlib.h>

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

int main(){
    struct Node * head;
    struct Node * Second;
    struct Node * Third;
    struct Node * Forth;

    head = (struct Node *) malloc(sizeof(struct Node));
    Second = (struct Node *) malloc(sizeof(struct Node));
    Third = (struct Node *) malloc(sizeof(struct Node));
    Forth = (struct Node *) malloc(sizeof(struct Node));

    int x,y,z,h;
    printf("Enter the number the insert in list: ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    scanf("%d",&h);

    head->data = x;
    head->next = Second;
    
    Second->data = y;
    Second->next = Third;
    
    Third->data = z;
    Third->next = Forth;
    
    Forth->data = h;
    Forth->next = NULL;
    
    Tranvesal(head);
    
    return 0;
}