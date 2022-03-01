#include<stdio.h>

int main(){
    int n=4;
    char l = '*';
    for(int i =1; i<=n ; i++){
        for(int j=1;j<=i;j++){
            printf("%c",l);
        }
        printf("\n");
    }
    return 0;
}