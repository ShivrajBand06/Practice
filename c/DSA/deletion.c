#include<stdio.h>
void display(int arr[],int size){
   
    for(int i=0;i<size;i++){
     printf("%d\n", arr[i]);
    }
}
 

int inddelete(int arr[],  int size, int capacity, int index){
   
    for(int i = index; i<size ; i++){
     arr[i]=arr[i+1];
    }
    
    printf("deletion sucessful\n");
    return 1;
}


int main(){
    int arr[100]={7,55,45,96,455,441};
    int size=6;
    int  index;
    display(arr,size);
    printf("Enter the index no you wat to delete: \n");
    scanf("%d",&index);
    inddelete(arr,size,100,index);
    size-=1;
    display(arr,size);

    return 0;
}