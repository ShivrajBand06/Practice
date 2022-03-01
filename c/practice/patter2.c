#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    char K='*';
    scanf("%d",&n);
    for(int i=0; i<=n ; i++){
        for(int j = 0;j<i;j++){
            if(i+j>=n){
            printf("%c",K);
            }
           else{
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
0    1  2  3  4
1             *
2          *  *
3      *   *  *
4  *   *   *  *
*/