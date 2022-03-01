#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void Traversal(struct Node * head){
    struct Node * ptr = head;
    for(int i=0; ptr->next != NULL; i++){
        printf("Elenment = %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node * Insert_node(struct Node * head, int data, int node_no){
    if(node_no==1){
    struct Node * new = (struct Node *) malloc(sizeof(struct Node)) ;
    new->data = data;
    new->prev = NULL;
    new->next = head;
    head = new;
    return head;
    }
    else{
        int i=3;
        struct Node * new = (struct Node *) malloc(sizeof(struct Node));
        struct Node * ptr = head;
        struct Node * p = head->next;
        
        new->data=data;
        while(i<=node_no){
            ptr = ptr->next;
            p= p->next;
            i+=1;
        }

        new->next =ptr->next;
        ptr->next = new;

        new->prev = ptr;
        p->prev = new;
        return head;
    }
}

struct Node * Delete_first_Node(struct Node * head ){
    struct Node * ptr = head->next;
    head = ptr;
    ptr->prev = NULL;
    return head;
}

struct Node * delete_node(struct Node *head , int node_no){
    if(node_no ==1){
    struct Node * ptr = head->next;
    head = ptr;
    ptr->prev = NULL;
    return head;
    }
    else{
        struct Node * ptr = head;
        struct Node * p = head->next;
        int i=2;
        while(i != node_no){
            ptr = ptr->next;
            p=p->next;
            i++;
        }
        struct Node * q =p->next;
        ptr->next = q;
        q->prev =ptr;
        free(p);
        return head; 
    }
    
}
int main(){
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct Node * h1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node * h2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node * h3 = (struct Node*) malloc(sizeof(struct Node));
    struct Node * h4 = (struct Node*) malloc(sizeof(struct Node));
    struct Node * h5 = (struct Node*) malloc(sizeof(struct Node));
    struct Node * h6 = (struct Node*) malloc(sizeof(struct Node));
   
   head->data = 45;
   h1->data = 55;
   h2->data = 65;
   h3->data = 365;
   h4->data = 465;
   h5->data = 565;
   h6->data = 665;

   head->prev= NULL;
   head->next = h1;
   h1->prev = head;
   h1->next = h2;
   h2->prev = h1;
   h2->next = h3;
   h3->prev = h2;
   h3->next = h4;
   h4->prev = h3;
   h4->next = h5;
   h5->prev = h4;
   h5->next = h6;
   h6->prev = h5;
   h6->next = NULL;
   
    Traversal(head);
    printf("\n\n");
    head = Insert_node(head, 12 ,2);
    
    Traversal(head);
    printf("\n\n");
    //head =Delete_first_Node(head);
    //Traversal(head);
    printf("\n\n");
    
    head = delete_node(head , 4);
    Traversal(head);
    printf("\n\n");
    
    return 0;
}