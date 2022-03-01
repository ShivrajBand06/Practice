#include<stdio.h>

int main(){
    int n =4;
    char k='*';
    for(int i=1; i<=n ; i++){
        for(int j=1;j<=n ; j++){
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}