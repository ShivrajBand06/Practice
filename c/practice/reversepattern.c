#include<stdio.h>


int main(){
    int n=10;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n;j++){
            if(j>=i && j<2*n-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}