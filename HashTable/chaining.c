#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

Node * createNode(int data){
    Node * temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}


void SortedInsertion(Node **head,int data){
    
    Node * t = *head;

    if(t==NULL){
        *head=createNode(data);
    }
    else{
         Node* temp = createNode(data);
            if(data <= t->data){
               
                temp->next=t;
                *head = temp;
            }
            else{
                Node * q =NULL;

                while(t && data > t->data){
                    q=t;
                    t=t->next;
                }
                temp->next = t;
                q->next=temp;



            }
    }
}
int hashing(int data){
    return data%10;
}

void Insert(Node*h[],int data){

    int index= hashing(data);

    SortedInsertion(h+index,data);



}
void Display(Node * t){
    while(t){
        printf("%d\n",t->data);
        t=t->next;
    }
}
int main(){

    Node* HT[10];
    int i;
    for(i=0;i<10;i++){
        HT[i]=NULL;
    }
    Insert(HT,22);
    Insert(HT,42);
    Insert(HT,52);
    Display(HT[2]);
    

}