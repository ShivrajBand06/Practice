#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Stack{
    int size;
    int top;
    char * arr;
};

int isEmpty(struct Stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}

int isFull(struct Stack * ptr){
    if(ptr->top==ptr->size){
        return 1;
    }
    return 0;
}

void push(struct Stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack is full , Unable to add %c\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct Stack* ptr ){
    if(isEmpty(ptr)){
        printf("Stack is empty, Unable to remove element\n");
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int match(char a, char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}

int Parenthesis_match(char * exp){
    struct Stack* sp;
    sp->size=strlen(exp);
    sp->top=-1;
    sp->arr=(char *) malloc(sp->size * sizeof(char));
    char poped;

    for(int i =0; exp[i] != '\0' ; i++){
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
            if(isEmpty(sp)){
                return 0;
            }
         poped = pop(sp);
        if(!match(poped ,exp[i])){
            return 0;
        }
    }
 }
    if(isEmpty(sp)){
        return 1;
    }
    return 0;
}


int main(){
    char * exp = "{8-dds[jj=8(mc)]";
    if(Parenthesis_match(exp)){
        printf("Parenthesis is Balenced\n");
    }
    else{
        printf("Parenthesis is not Balenced\n");

    }
    
    return 0;
}