#include<stdio.h>
void display(int arr[],int size){
   
    for(int i=0;i<size;i++){
     printf("%d\n", arr[i]);
    }
}
 

int indinsert(int arr[],  int size, int element, int capacity, int index){
    if(size>=capacity){
    printf("insertiom faild\n");
    return -1;   
    }
    for(int i = size-1; i>=index; i--){
     arr[i+1]=arr[i];
    }
    arr[index] = element;
    printf("Insertion sucessful\n");
    return 1;
}


int main(){
    int arr[100]={7,55,45,96,455,441};
    int size=6;
    int element, index;
    display(arr,size);
    printf("Enter the number you want to insert: \n");
    scanf("%d",&element);
    printf("Enter the index no: \n");
    scanf("%d",&index);
    indinsert(arr,size,element,100,index);
    size+=1;
    display(arr,size);

    return 0;
}