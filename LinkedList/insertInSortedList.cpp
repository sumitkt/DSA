#include<stdio.h>
#include<stdlib.h>
#include<climits>


typedef struct Node{
int data;
struct Node* next;
}Node;

void insertLast(Node** tail, int value)
{

    Node* t = (Node*)malloc(sizeof(Node));
    t -> data = value;
    t -> next = NULL;

    if(*tail == NULL){
        *tail = t;
    }
    else{
        (*tail) -> next = t;
        (*tail) = t;
    }

}
Node* createNode(int data){
    Node* t=(Node*)malloc(sizeof(Node));
    t -> data = data;
    t -> next = NULL;
    return t;
}

void insert(Node** head, int pos, int data){
    Node* p = *head;

    if(pos == 0){
        p = createNode(data);
        p -> next = *head;
        *head = p;
        p = NULL; // no need to make it NULL
        
    }
    else if( pos > 0){

        for(int i=0; (i < pos-1) && p ; i++){
            p = p->next;
        }

        if (p){
            Node* t =createNode(data);
            t -> next = p -> next;
            p -> next = t;
            t = NULL; // no need to make it NULL

        }


    }

}


void Display(Node * head){
    while(head){
        printf("%d",head->data);
        head = head -> next;
    }
}

void insertinSortedList(Node* head,int key){
    Node*p = head;
    Node*q = NULL;
    while(p && (p -> data < key)){
        q = p;
        p = p -> next;
    }

}

bool CheckIfSorted(Node* head){
    
    int x = INT_MIN;

    while(head){

        if(head->data < x){
            return false;
        }
        x= head -> data;
        head = head -> next;
    }
    return true;
}

int main(){

Node *head = NULL;
insert(&head,0,1);
insert(&head,1,2);
insert(&head,2,6);
insert(&head,3,4);
insert(&head,4,5);

Display(head);
printf("\n%d\n",CheckIfSorted(head));
}