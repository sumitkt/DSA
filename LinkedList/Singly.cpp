#include<stdio.h>
#include<stdlib.h>



typedef struct Node{
    int data;
    struct Node * next;

}Node;
Node * CreateNode(int value);
void Display(Node * first);
void InsertNodeAtBeginning(Node ** head,int value);
void DeleteFromBeginning(Node ** head);
void InsertNodeAtEnd(Node * traverse,int value);
int main(){
 Node * head= NULL;
 InsertNodeAtBeginning(&head,2);
  InsertNodeAtBeginning(&head,4);
   InsertNodeAtBeginning(&head,4);
    InsertNodeAtBeginning(&head,8);
     InsertNodeAtBeginning(&head,10);
      InsertNodeAtBeginning(&head,12);
       InsertNodeAtBeginning(&head,14);



Display(head);

 DeleteFromBeginning(&head);
InsertNodeAtEnd(head,20);
 Display(head);


}

Node * CreateNode(int value){
     Node * temp= (Node *)malloc(sizeof(Node));
     temp->data=value;
     temp->next = NULL;
     return temp;
}

void Display(Node * first){
    
    while(first){
        printf("%d--",first->data);
        first=first->next;
    }
}

void InsertNodeAtBeginning(Node ** head,int value){

    
     Node * temp= CreateNode(value);
     //temp->data=value;
     temp->next = *head;
     *head=temp;
     //return *head;
}

void DeleteFromBeginning(Node ** head){
    Node* temp=(*head);
    (*head)=(*head)->next;
    free(temp);
}


void InsertNodeAtEnd(Node * traverse,int value){
    Node * temp=CreateNode(value);
    while(traverse->next){
        traverse=traverse->next;
    }
    traverse->next=temp;

}