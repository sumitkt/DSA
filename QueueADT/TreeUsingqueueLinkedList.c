#include<stdio.h>
#include<stdlib.h>
typedef struct Tnode{
    int data;
    struct Tnode * lchild;
    struct Tnode * rchild;
}Tnode;



typedef struct Node{
    Tnode* data;
    struct Node *next;
}Queue;

Queue* CreateNode(Tnode* data){
    Queue * t = (Queue*)malloc(sizeof(Queue));
    t->data = data;
    t->next = NULL;
    return t;
}



void Enqueue(Queue **front,Queue **rear,Tnode* data){

    Queue *temp = CreateNode(data);
    
    if(*front == NULL){
        *front = temp;
        *rear = temp;
        // return;        
    }
    else{
    
    (*rear)->next = temp;
    (*rear)=temp;
    }
}



Tnode* Dequeue(Queue **front){
    
    if(*front == NULL){
        return NULL;
    }
    
    Queue *temp=*front;
    (*front)=(*front)->next;
    printf("\nNode to be deleted %d\n",(temp->data)->data);
    return temp->data;

}


int IsEmpty(Queue ** front){
    if(*front == NULL){
        return 1;
    }
    return 0;

}



void Display(Queue *t){
    // Queue *temp=front;
    while(t){
        printf("%p\t",t->data);
        t=t->next;
    }
}


Tnode* CreateTreeNode(int data){
    Tnode *temp = (Tnode*)malloc(sizeof(Tnode));
    temp->data = data;
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}




void CreateTree(Tnode** root,Queue** front,Queue ** rear,int data){
       
    if(*root == NULL){
        Tnode * temp =CreateTreeNode(data); 
        *root = temp;
        printf("%d",*front);
        Enqueue(front,rear,temp);
        // if((*front)->next == NULL){
        //     printf("!!!!!!!!!!!");
        // }
    //    Display(*front);
    }
    while(!IsEmpty(front)){
        int x;
        Tnode * p =Dequeue(front);
        printf("Enter left child data\n");
        scanf("%d",&x);
        if(x!=-1){
         Tnode *ltemp = CreateTreeNode(x);
         p->lchild=ltemp;
        Enqueue(front,rear,ltemp);
        }
        printf("Enter right child data\n");
        scanf("%d",&x);
        if(x!=-1){
            Tnode * rtemp =CreateTreeNode(x);
             p->rchild=rtemp;
            Enqueue(front,rear,rtemp);
        }  
    }
}
void Displaytree(Tnode *root){
    if(root == NULL){
        return;
    }
    printf("%d\n",root->data);
    Displaytree(root -> lchild); 
    Displaytree(root ->  rchild);
}

int main(){
    Queue *front = NULL;
    Queue *rear=NULL;
    Tnode *root =NULL;

    CreateTree(&root,&front,&rear,5);
    Displaytree(root);
    
    // Enqueue(&front,&rear,25);
    // Enqueue(&front,&rear,35);
    // Enqueue(&front,&rear,45);
    // Enqueue(&front,&rear,55);
    // Enqueue(&front,&rear,65);
    // Enqueue(&front,&rear,75);
    // Display(front);
    // Dequeue(&front);
    // printf("\n");
    // Display(front);
    // Dequeue(&front);
    // printf("\n");
    // Display(front);


}