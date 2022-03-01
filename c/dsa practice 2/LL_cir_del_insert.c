#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void Traversal(struct Node * head){
    struct Node * ptr = head;
    do{
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!= head);

}

struct Node * Insertion(struct Node * head, int data, int node_no){
    if(node_no ==1){
        struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
        ptr->next =head;
        ptr->data = data;
        struct  Node * p = head->next;
        while(p->next != head){
            p=p->next;
        }
        p->next = ptr;
        head = ptr;
        return head;
    }
    else{
        struct Node * ptr = head;
        struct Node * new = (struct Node *) malloc(sizeof(struct Node));
        new->data = data;
        int i=2;
        while(i<node_no){
            ptr = ptr->next;
            i+=1;
        }
        new->next = ptr->next;
        ptr->next = new;
        return head;
    }
}
 struct Node * deleteNode(struct Node * head, int node_no){
     if(node_no == 1){
         struct Node * ptr = head->next;
         struct Node * p = head;

        while(ptr->next != head){
            ptr = ptr->next;
        }
        ptr->next = head->next;
        head = head->next;
        free(p);
        return head;
     }
     else{

         struct Node * ptr = head;
         struct Node * p = head->next;
         
         for(int i = 1; i<node_no-1; i++){
            ptr= ptr->next;
            p=  p->next;
         }
            
        ptr->next = p->next;
        free(p);
        return head;
}

}

int main(){
    struct Node * head = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h1 = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h2 = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h3 = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h4 = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h5 = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h6 = (struct Node * ) malloc (sizeof(struct Node));
    struct Node * h7 = (struct Node * ) malloc (sizeof(struct Node));

    head->data = 1;
    h1->data = 12;
    h2->data = 1234;
    h3->data = 1235;
    h4->data = 1236;
    h5->data = 1234;
    h6->data = 1235;
    h7->data = 1232;

    head->next = h1;
    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = h6;
    h6->next = h7;
    h7->next = head;


 Traversal(head);

printf("\n\n");


head = Insertion(head, 112,1);
Traversal(head);

printf("\n\n");
head = deleteNode(head,4);
Traversal(head);



return 0;
} 