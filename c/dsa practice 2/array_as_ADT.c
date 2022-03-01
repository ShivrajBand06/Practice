#include <stdio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a , int tsize, int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *) malloc(tsize * sizeof(int));

}

void setarray(struct myarray *a){
 int n;
for(int i=0; i< a->used_size; i++){
    printf("Enter the Value for %d element\n", i);
    scanf("%d", &n);
    (a->ptr)[i] = n;
}
}

void showarray(struct myarray *a){
    for(int i =0 ; i<a->used_size;i++){
        printf("%d",(a->ptr)[i]);
    }

}

int main()
{
struct myarray a;
createarray(&a,10,5);
printf("print set values \n");
setarray(&a);
printf("Values of array are \n");
showarray(&a);


    return 0;
}