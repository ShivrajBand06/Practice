#include<stdio.h>
#include<stdlib.h>

struct Queue 
{
    int size;
    int f;
    int r;
    int * arr;
};

int isempty(struct Queue * q){
    if(q->f==q->r){
        return 1;
    }
    return 0;
}

int isfull(struct Queue * q){
    if(q->r==(q->size -1)){
        return 1;
    }
    return 0;
}

void Enqueue(struct Queue* q, int val){
    if(isfull(q)){
        printf("Queue Overflow, Unable to add %d\n", val);
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("Enqueued element is : %d\n",val);
    }
}

int Dequeue(struct Queue* q){
    int val;
    if(isempty(q)){
        printf("Queue is empty, Unable to remove\n");
        return -1;
    }
    else{
        q->f++;
        val = q->arr[q->f];
    }
    return val;
}
int main(){
    struct Queue * q;
    q->size=8;
    q->f=q->r=-1;
    q->arr= (int*) malloc(q->size * sizeof(int));
     
     Enqueue(q,44);
     Enqueue(q,4);
     Enqueue(q,47);
     Enqueue(q,4);
     Enqueue(q,84);
     Enqueue(q,64);
     Enqueue(q,34);
     Enqueue(q,404);
    /*
     printf("Dequeued Element : %d\n",Dequeue(q));
     printf("Dequeued Element : %d\n",Dequeue(q));
     printf("Dequeued Element : %d\n",Dequeue(q));
     printf("Dequeued Element : %d\n",Dequeue(q));
     */
    if(isempty(q))
        printf("Queue is Empty");
    else if(isfull(q))
        printf("Queue is Full");
    return 0;
}