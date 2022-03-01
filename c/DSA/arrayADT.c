#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a, int tsize, int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
    }

void setdata(struct myarray *a){
    int n;
for(int i=0; i < (a->used_size); i++){
    printf("Enter the %d element: ", i);
    scanf("%d",&n);
    (a->ptr)[i]=n;
}
}

void showdata(struct myarray *a){
    for(int i=0;i < (a->used_size); i++){
        printf("The value at %d element is %d\n",i,(a->ptr)[i]); 
}
}

int main(){
struct myarray marks;
createarray(&marks,100,5);
printf("we are running set value now\n");
setdata(&marks);
printf("we are running show function now\n");
showdata(&marks);
    return 0;
}