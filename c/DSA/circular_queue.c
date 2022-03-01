#include<stdio.h>
#include<stdlib.h>

struct CircularQueue {
    int size;
    int r;
    int f;
    int * arr;
};

int isEmpty(struct CircularQueue * q){
    if(q->r==q->f){
     return 1;
    }
    return 0;
}

int isFull(struct CircularQueue * q){
    if((q->r+1)%q->size==q->f){
     return 1;
    }
    return 0;
}

void Enqueue(struct CircularQueue * q, int val){
    if(isFull(q)){
        printf("Unable to add %d Queue is full\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("enqueued value is %d\n",val);
    }
}

int Dequeue(struct CircularQueue * q){
    int val;
    if(isEmpty(q)){
        printf("Unable to remove, Queue is Empty\n");
        return -1;
    }
    else{
        q->f=(q->f+1)%q->size;
        val = q->arr[q->f];
    }
        return val;

}




int main(){
    struct CircularQueue * q;
    q->size = 6;
    q->r=q->f=0;
    q->arr= (int*) malloc(q->size * sizeof(int));
     
     Enqueue(q,44);
     Enqueue(q,4);
     Enqueue(q,47);
     Enqueue(q,4);
     Enqueue(q,84);
     Enqueue(q,64);
     Enqueue(q,34);
     Enqueue(q,404);
    
     printf("Dequeued Element : %d\n",Dequeue(q));
     printf("Dequeued Element : %d\n",Dequeue(q));
     printf("Dequeued Element : %d\n",Dequeue(q));
     printf("Dequeued Element : %d\n",Dequeue(q));
     
    if(isEmpty(q))
        printf("Queue is Empty");
    else if(isFull(q))
        printf("Queue is Full");

    return 0;
}