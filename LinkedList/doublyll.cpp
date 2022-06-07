#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
struct Node * prev;
int data;
struct Node * next;

}Node;
Node * reverse(Node *p);
Node * createNode(int data){

    Node * t = (Node *)malloc(sizeof(Node ));
    t->data = data;
    t->prev = NULL;
    t->next = NULL;
    return t;
}


void insertAtPositions(Node ** head,int pos,int data){

    Node * t = createNode(data);
    Node * p = *head;

    if(pos == 0){
       
        if(p==NULL){
             *head = t;
        }
        else{
            t->next=(*head);
            (*head)->prev = t;
            (*head)=t;
        }

    }
    else{
        for(int i=0;i<pos -1 && p ;i++){
            p=p->next;
        }
        if(p){
       
            if(p->next){
                (p->next)->prev = t;
                t->next = p->next;
            }
            t->prev = p;
            p->next = t;
        }
    }



}
void Display(Node * p){

    while(p!=NULL){
        printf("%d\t",p->data);
        p= p->next;
    }
}

Node * reverse(Node *p){

    if(p->next == NULL){
        p->prev = NULL;
        return p;
    }
    Node * new_head=reverse(p->next);
    (p->next)->next = p;
    p->prev = p->next;
    p->next = NULL;


    return new_head;

}

Node * reverseIteratively(Node * p){
    Node * q = NULL;

    while(p){
        q=p;
        p=p->next;
        q->next  = q -> prev;
        q -> prev = p;
    }
    // q -> next = q -> prev;
    // q ->prev = p;

    return q;
}

int main(){
    Node * head = NULL;
    insertAtPositions(&head,0,10);
    insertAtPositions(&head,1,11);
    insertAtPositions(&head,2,12);
    insertAtPositions(&head,0,100);
    insertAtPositions(&head,9,10);
    insertAtPositions(&head,0,200);
    insertAtPositions(&head,0,300);
    insertAtPositions(&head,0,400);
    Display(head);
    printf("\n");
    Node *new_head = reverseIteratively(head);
    Display(new_head);

}