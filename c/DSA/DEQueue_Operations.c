#include<stdio.h>
#include<stdlib.h>

struct DEQueue{
    int size;
    int r;
    int f;
    int * arr;
};

void queueTraversal(struct DEQueue * q){
    printf("Printing the elements of Queue\n");
    for(int i=0; i<q->size;i++){
        printf("Element: %d\n",q->arr[i]);
    }
}

int isempty(struct DEQueue * Q){
    if(Q->f==-1)
     return 1;
    return 0;
}

int isFull(struct DEQueue * Q){
    if(Q->r==(Q->size-1))
     return 1;
    return 0;
}

void enqueueF(struct DEQueue *q, int val){
    if(isempty(q)){
        printf("Queue is Full Unable to add element %d at front", val);
    }
    else{
        q->f--;
        q->arr[q->f]=val;
        printf("enqueued value : %d\n", val);
    }
}


void enqueueR(struct DEQueue *q, int val){
    if(isFull(q)){
        printf("Queue is Full Unable to add element %d in Queue", val);
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("enqueued value : %d\n", val);
    }
}

int dequeueF(struct DEQueue *q){
    if(isempty(q)){
        printf("Queue is Empty unable to remove element\n");
        return -1;
    }
    else{
        int val;
        val = q->arr[q->f];
        q->f++;
        return val;
    }
}


int dequeueR(struct DEQueue *q){
    if(isempty(q)){
        printf("Queue is Empty unable to remove element\n");
        return -1;
    }
    else{
        int val;
        val = q->arr[q->r];
        q->r--;
        return val;
    }
}


int main(){
    struct DEQueue * q;
    q->size=8;
    q->f=q->r=-1;
    q->arr= (int*) malloc(q->size * sizeof(int));
    queueTraversal(q);
     
    enqueueR(q,44);
    enqueueR(q,4);
    enqueueR(q,47);
    enqueueR(q,4);
    enqueueR(q,84);
    enqueueR(q,64);
    enqueueR(q,34);
    enqueueR(q,404);
    queueTraversal(q);

    
    printf("Dequeued Element : %d\n",dequeueF(q));
    printf("Dequeued Element : %d\n",dequeueF(q));
    printf("Dequeued Element : %d\n",dequeueF(q));
    printf("Dequeued Element : %d\n",dequeueF(q));
    queueTraversal(q);


    enqueueF(q,44);
    enqueueF(q,4);
    enqueueF(q,47);
    enqueueF(q,4);
    queueTraversal(q);

    

    printf("Dequeued Element : %d\n",dequeueR(q));
    printf("Dequeued Element : %d\n",dequeueR(q));
    printf("Dequeued Element : %d\n",dequeueR(q));
    printf("Dequeued Element : %d\n",dequeueR(q));
    queueTraversal(q);

     
    return 0;
}