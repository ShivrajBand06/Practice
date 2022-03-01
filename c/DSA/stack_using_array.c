#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};


int StackisEmpty(struct stack * ptr){
   if(ptr->top==(-1)){
       return 1;
   }
   return 0;
}
int StackisFull(struct stack * ptr){
  if(ptr->top==(ptr->size-1)){
       return 1;
   }
   return 0;   
}

int main(){
    struct stack * S;
    S->size=2;
    S->top=-1;
    S->arr= (int *) malloc(S->size * sizeof(int));
    //S->arr[0]=1;
    //S->top++;
    if(StackisEmpty(S)){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack is Not Empty\n");

    }
    if(StackisFull(S)){
        printf("Stack is Full\n");
    }
    else{
        printf("Stack is Not Full\n");

    }
    return 0;
}