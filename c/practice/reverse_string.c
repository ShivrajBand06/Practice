#include<stdio.h>

void reverse(char *c , int n){
    char temp;
    int i=0;
   for(int i=0 ; i<((n-1)/2);i++){
       temp = c[i];
       c[i] = c[n-i-2];
       c[n-i-2] = temp;
       
   }
}

int main(){
    char c[]= "Rushabh";
    int n = sizeof(c)/sizeof(char);
    //printf("%d",n);
    reverse(c,n);
    printf("The reversed string is %s",c);

    return 0;
}