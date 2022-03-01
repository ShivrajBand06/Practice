#include<stdio.h>

int main(){
    int n, sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    printf("The sum of first %d num is %d",n,sum);
    return 0;
}