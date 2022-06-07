#include<stdio.h>
#include<stdlib.h>

// Sparse Matrix using Linked List representation


typedef struct Node{
    int column;
    int value;
    struct Node * next;
}Node;


Node* createNode(int column,int data){
    Node * t = (Node *)malloc(sizeof(Node));
    t -> column = column;
    t -> value = data;
    t -> next = NULL;
    return t;
}
void insert(Node**array,int row,int column,int data){
    printf("Inside Insert function\n");
    Node * newNode = createNode(column,data);
    Node* q = array[row];
    if(q == NULL){
        array[row] = newNode;
        return;
    }
    Node* p = NULL;
    while(q){
        p = q;
        q = q -> next;
    }
    p -> next = newNode;
    return;    
}

void Display(Node** array,int rows, int cols){
    for(int i = 0; i < rows; i++){
        Node* p = array[i];
        printf("INSIDE DISPLAY\n");
        for(int j = 0; j < cols ; j++){
            if(p && (j == (p -> column))){
                printf("%d\t", p -> value);
                p = p -> next;
            }
            else{
                printf("%d\t",0);
            }
        }

    }
}

int main(){

    int ROWS = 5;
    Node* Matrix[ROWS]; // int a[5];
    for(int i = 0; i<ROWS;i++){
        Matrix[i]=NULL;
    }
//  Continue from here
    // for(int i = 0 ; i< ROWS; i++){
    //     int cols,data;
    //     printf("enter the column and the value");
    //     scanf("%d %d",&cols, &data);
    //     insert(Matrix,i,cols,data);
    // }

    insert(Matrix,0,4,8);
    insert(Matrix,1,3,7);
    insert(Matrix,2,0,5);
    insert(Matrix,2,4,9);
    insert(Matrix,3,5,3);
    insert(Matrix,4,0,6);
    insert(Matrix,4,3,4);

    Display(Matrix,5,6);
    




}