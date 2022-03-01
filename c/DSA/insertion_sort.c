#include<stdio.h>

void Printarray(int * A, int n){
for(int i = 0; i< n; i++){
printf("%d ",A[i]);
}
printf("\n");
}

void insertionsort(int * A, int n){
    int key, j;
    for(int i = 1; i<= n-1; i++){
        key = A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]= key;
    }
}

int main(){
    int A[]={44, 55, 96, 445, 65 ,798, 23 ,1 };
    int n= 8;
    Printarray(A,n);
    insertionsort(A,n);
    Printarray(A,n);   
    return 0;
}