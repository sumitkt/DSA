/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;

Node* createNode(int data);
void Insert(Node** head,int data);
void Display(Node ** head,Node *p);

Node* createNode(int data){
    Node * temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp ->next = NULL;
    return temp;
}

void Insert(Node** head,int data){
    Node *p= *head;
    Node * t = createNode(data);
    if(*head == NULL){
        *head = t;
        t->next = *head;
        return;
    }
    
    do{
        p=p->next;
    }while(p->next != *head);
    
    p->next = t;
    t->next = *head;
    
}

// void Display(Node* head){
//     Node* p =head;
//     do{
//         printf("%d\t",p->data);
//         p=p->next;
//     }while(p!=head);
    
// }

void Display(Node ** head,Node *p){
    
    if(p ->next == *head){
        printf("%d\t",p->data);
        return;
    }
    printf("%d\t",p->data);
    Display(head,p->next);
}
int main()
{
    //printf("Hello World");
    Node* head = NULL;
    Insert(&head,1);
    Insert(&head,2);
    Insert(&head,3);
     Insert(&head,4);
    Insert(&head,5);
    Insert(&head,6);
    Display(&head,head);
    return 0;
}

