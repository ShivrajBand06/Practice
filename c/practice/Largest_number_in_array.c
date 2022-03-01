#include<stdio.h>

int Greatest(int a[],int n){
int x=0;
for(int i = 0; i<n ;i++){
    if(x < a[i]){
        x=a[i];
    }
}
return x;
}

int main(){
    int a[10] = {1,55,89,63,47,5,6,9,88,100};
    printf("The largest element in array is %d ",Greatest(a,sizeof(a)/sizeof(int)));
    return 0;
}