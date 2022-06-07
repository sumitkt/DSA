#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    // constructor
    Node(int d){
        this->data = d;
        this ->next = NULL;
    }


};

 void insertAtHead(Node ** head,int data){

     Node * temp = new Node(data);
     temp -> next = *head;
     *head = temp;

 }

 void insertAtTail(Node ** tail, int data){
     //create a node
     Node * temp = new Node(data);
     (*tail)->next = temp;
     (*tail) = (*tail) -> next;
 }

 void insertAtPosition(Node ** head,Node ** tail, int position, int data){
     //create a node
     Node * NodeToInsert = new Node(data);
     Node * temp = *head;
    int cnt =1;
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return;
    }
    NodeToInsert -> next = temp -> next;
    temp -> next  = NodeToInsert;

 }

 void print(Node ** head){
     Node * temp = *head;

     while(temp != NULL){
         cout << temp -> data << " ";
         temp = temp -> next;
     }
     cout << endl;


 }
int main(){

    //Node * head = NULL;
    //Node * tail = NULL;

    Node * tail = new Node(100);
    Node * head = tail;
    insertAtHead(&head,10);
    print(&head);
    insertAtHead(&head,20);
    insertAtHead(&head,30);
    print(&head);

    cout<<"**********"<<endl;
     insertAtTail(&tail,20);
    insertAtTail(&tail,30);
    print(&head);
    insertAtTail(&tail,300);
    print(&head);

    insertAtPosition(&head,&tail,3,500);
    print(&head);

    insertAtPosition(&head,&tail,1,1000);
    insertAtPosition(&head,&tail,10,5000);

    print(&head);


    return 1;
}