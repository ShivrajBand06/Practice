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

void inorder(struct Node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int isBST(struct Node * root){
    static struct Node * prev =NULL;
    if(root != NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct Node *search(struct Node * root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    if( key< root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

struct Node *searchiter(struct Node * root, int key){
    while(root != NULL){
        if(key==root->data){
            return root;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
int main(){
    struct Node * p1 = createNode(88);
    struct Node * p2 = createNode(68);
    struct Node * p3 = createNode(98);
    struct Node * p4 = createNode(8);
    struct Node * p5 = createNode(69);
    struct Node * p6 = createNode(95);
    struct Node * p7 = createNode(954);





    p1->left=p2;
    p1->right=p3;

    p2->left=p4;
    p2->right=p5;
    
    p3->left=p6;
    p3->right=p7;

    
    //Preorder(p1);
    printf("\n");
    //postorder(p1);
    printf("\n");
    inorder(p1);
    printf("\n");
    if(isBST(p1)){
        printf("It is Binarry Search Tree");
    }
    else{
        printf("It isn't Binarry Search Tree");
    }
    printf("\n");
    struct Node * n = search(p1,954);
    struct Node * n2 = searchiter(p1,68);

    if(n2 != NULL){
        printf("Found : %d", n2->data);
    }
    else{
        printf("Element not Found");
    }

    return 0;
}