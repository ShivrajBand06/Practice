#include<stdio.h>
void PrintArray(int * A, int n){
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int temp, minindex;
    for(int i=0; i<=n-1; i++){
        minindex=i;
        for(int j= i+1; j< n; j++){
            if(A[j]<A[minindex]){
                minindex=j;
            }
        }
        temp = A[i];
        A[i] = A[minindex];
        A[minindex] = temp;
    }
}
int main(){
    int A[]={44, 55, 96, 445, 65 ,798, 23 ,1 };
    int n= 8;
    PrintArray(A,n);
    selectionSort(A,n);
    PrintArray(A,n);   
    
    return 0;
}