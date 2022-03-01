#include<stdio.h>
#include<malloc.h>

struct Node{
 int data;
 struct Node * left;
 struct Node * right;
};

struct Node * createNode(int data){
    struct Node * n = (struct Node *) malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right=NULL;
    return n;
}

void Preorder(struct Node *root){
    if(root != NULL){
        printf("%d ",root->data);
        Preorder(root->left);
        Preorder(root->right);

    }

}

void postorder(struct Node * root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct Node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main(){
    struct Node * p1 = createNode(88);
    struct Node * p2 = createNode(68);
    struct Node * p3 = createNode(78);
    struct Node * p4 = createNode(98);
    struct Node * p5 = createNode(58);
    struct Node * p6 = createNode(9);
    struct Node * p7 = createNode(95);





    p1->left=p2;
    p1->right=p3;

    p2->left=p4;
    p2->right=p5;
    
    p3->left=p6;
    p3->right=p7;

    
    Preorder(p1);
    printf("\n");
    postorder(p1);
    printf("\n");
    inorder(p1);
    
    return 0;
}