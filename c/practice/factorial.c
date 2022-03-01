#include<stdio.h>

int factorialrec(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
    int fact =  n * factorialrec(n-1);
    return fact; 
    }
}
int factorialitv(int n){
    int val =1;
    for(int i=n;i>1;i--){
        val *=i;
    }
    return val;
}

int main(){
    
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,factorialrec(n));
    printf("The factorial of %d is %d",n,factorialitv(n));

    
    return 0;
}