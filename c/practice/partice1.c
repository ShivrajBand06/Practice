#include<stdio.h>

int main(){
    int n,x,i=0;
    printf("enter the number to conver in binary: ");
    scanf("%d",&n);
    int a[10];
    printf("Binary form of %d is ",n);
    while(n){
    x=n%2;
    n=n/2;
    a[i]=x;
    i++;
    }
    for(int j=i-1 ;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}