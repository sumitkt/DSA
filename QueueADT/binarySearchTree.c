#include<stdio.h>
#include<stdlib.h>

typedef struct Tnode{
    int data;
    struct Tnode* lchild;
    struct Tnode* rchild;
}Tnode;

Tnode* createNode(int data){
    Tnode* temp = (Tnode*)malloc(sizeof(Tnode));
    temp->data = data;
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}


void Insert(Tnode** root,int data){
    if(*root == NULL){
        Tnode* t = createNode(data);
        *root = t;
        return;
    }
    else if ((*root)->data > data){
         Insert(&((*root)->lchild),data);
    }
    else{ Insert(&((*root)->rchild),data);}

}

void preorder(Tnode* root){
    if(root != NULL){
        printf("%d\t",root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
void Inorder(Tnode* root){
    if(root != NULL){
        
        Inorder(root->lchild);
        printf("%d\t",root->data);
        Inorder(root->rchild);
    }
    
}

int main(){
    Tnode * root = NULL;
    Insert(&root,5);
    Insert(&root,15);
    Insert(&root,75);
    Insert(&root,45);
    Insert(&root,85);
    Insert(&root,35);
    Insert(&root,55);
    Insert(&root,3);
    Inorder(root);
    
}