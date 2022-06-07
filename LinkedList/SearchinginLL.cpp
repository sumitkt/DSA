#include<stdio.h>
#include<stdlib.h>


typedef struct Node {
    int data;
    struct Node * next;
}Node;

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

Node* searching(Node * head,int key){
 Node * t = head;
 Node * q = NULL;
 while(t){
     if( t-> data == key){
            q->next = t-> next;
            t->next = head;
            head = t;
            return head;
     }
     q=t;
     t=t->next;
 }
 return NULL;

}

// void insertLast(int data){
    
// }

int main (){

Node* head = NULL;


insert(&head,0,1);
insert(&head,1,2);
insert(&head,2,3);
insert(&head,0,5);
insert(&head,4,1);
insert(&head,5,2);
insert(&head,6,3);
insert(&head,7,5);
Display(head);

    

}
