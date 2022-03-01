#include<stdio.h>

void printArray(int * A, int n){
    for(int i=0; i<n ;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot =A[low];
    int i = low +1;
    int j = high;
    int temp;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void QuickSort(int A[], int low, int high){
    int partitionindex;
    if(low < high){
        partitionindex = partition(A, low , high);
        QuickSort(A, low, partitionindex-1);
        QuickSort(A, partitionindex+1, high);

    }
}

int main(){
    int A[]= {44,4,56,6,9,555,16,35,12,51,65,74,41,605,115,11,10,121,51,59,66,4,6,5,89,5};
    int n = sizeof(A)/sizeof(A[0]) ;
    printArray(A, n);
    QuickSort(A, 0, n-1);

    printArray(A, n);



    
    return 0;
}