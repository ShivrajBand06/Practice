#include<stdio.h>

int main(){
    int n, rem,i=0;
    int a[n];

    printf("Enter the number to convert into binary:");
    scanf("%d",&n);
    printf("Binary form of %d is ", n);

    while (n)
    {
    rem = n%2;
    n = n/2;
    a[i]=rem;
    i++;
    }
    for(int c = i-1;c>=0;c--){
        printf("%d",a[c]);
    }
    return 0;
}