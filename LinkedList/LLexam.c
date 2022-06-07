#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node * next;
}Node;

Node * createNode(int data){

    Node * t = (Node*)malloc(sizeof(Node));
    t->data = data;
    t->next = NULL;
    return t;

}

void InsertatBegin(Node** head,int data){

    Node * t = createNode(data);
    t->next = *head;
    *head = t;
    
}

Node * reversetheList(Node ** head){
    Node * r = NULL;
    Node * p = NULL;
    Node * q = *head;

    while(q){
        r = p;
        p = q;
        q = q->next;
        p -> next = r;
    }
    *head = p;
    return *head;
}

void Display(Node * head){

    while(head){
        printf("%d-->",head->data);
        head = head->next;
    }

// 1->2->3->4->5
}

Node* Union(Node *p, Node*q){
     
    while(p){

            Node * start_ptr = q;
            Node * prev_ptr = NULL;
            int data = p->data;
            int flag  = 1;
            while (start_ptr){


                if(start_ptr->data == data){
                    flag = 0;
                    break;
                }
                
                prev_ptr = start_ptr;
                start_ptr = start_ptr->next;

            }
            if(flag){
                Node * temp = p;
                p = p->next;
                prev_ptr -> next = temp;
                temp->next = NULL;
            }
            else{
                Node * temp = p;
                p=p->next;
                free(temp);
            }
    }

    return q;
}

Node * UnionWithHashTable(Node *p, Node *q){
        // O(N) 
    int Hashtable[10]={0};

    Node* start = p;
    Node * prev = NULL;
    while(start){
        int data = start -> data;
        int rem = data % 10;
        Hashtable[rem]++;
        prev = start;
        start = start -> next;
    } // it will fill the HashTable

    while(q){
        int data = q -> data;
        int rem = data % 10;
        if(Hashtable[rem] == 0){
            Node * t = q;
            q = q->next;
            prev -> next = t;
            prev = prev ->next;
            prev -> next = NULL;
        }
        else{
            q = q -> next;
        }
    }



    return p;
}

Node * IntersectionwithHashTable(Node* p, Node*q){
    Node * new_head = NULL;
    Node * r = NULL;

    int Hashtable[10]={0};
    int flag = 1;
    Node* start = p;
    while(p){
        int data = p -> data;
        int rem = data%10;
        Hashtable[rem]++;
        p = p -> next;
    }// hashTable is filled up

    while(q){
        int data = q -> data;
        int rem = data%10;
        if(Hashtable[rem]> 0){
            if(flag){
                new_head = r = q;
                q = q->next;
                flag = 0;
            }else{
                Node * t = q;
                q = q -> next;
                r->next = t;
                r = r -> next;
                r -> next = NULL;

            }
        }else{
            q = q -> next;
        }
    }
    return new_head;
}


Node * Intersection (Node * p, Node* q){

    Node * new_head =NULL, *r = NULL;
    int flag = 1;

    while(p){

            Node * start_ptr = q;
            int data = p->data;

            while(start_ptr){
                if(start_ptr->data == data){
                    if(flag){
                        new_head = r =p;
                        flag = 0;
                    }
                    else{
                    r->next = p;
                    r= r->next;
                    r->next = NULL;
                    }
                }
                start_ptr = start_ptr->next;
            }
        p = p->next;
    }
    return new_head;
}

Node * reverseWithRecursion(Node * p){
    if(p!=NULL){

        if(p -> next == NULL){
            return p;
        }
        Node * new_head = reverseWithRecursion(p -> next);
        Node * q = p -> next;
        q -> next = p;
        p-> next = NULL;
        return new_head;
    }
    return NULL;
}


Node * swapPairofNodes(Node * head){
    if(head -> next == NULL){
        return head;
    }
    Node * p = head;
    Node * q = head -> next;
    Node * new_head = q;
    Node * t = NULL;

    while(1){
        t = q -> next;
        q-> next = p;
        if(t == NULL || t -> next == NULL){
            break;
        }
        p-> next = t -> next;
        p = t;
        q = p -> next;
    }
    p -> next = t;
    return new_head;
}

Node * RemoveDuplicatesFromSorted(Node * head){
    Node * new_head = head;
    Node* p = head;
    Node* q = head -> next;

    while(q){
        if(p->data != q->data){
            p->next = q;
            p = p->next;
            q = q->next;

        }
        else{
            Node * t = q;
            q = q->next;
            free(t);
        }
    }
    p->next = NULL;
    return new_head;
}

int main(){

    Node * head1 = NULL;
    InsertatBegin(&head1,1);
    InsertatBegin(&head1,1);
    InsertatBegin(&head1,1);
    InsertatBegin(&head1,3);
    InsertatBegin(&head1,5);
    Node * head2 = NULL;
    InsertatBegin(&head2,2);
    InsertatBegin(&head2,3);
    InsertatBegin(&head2,4);
    InsertatBegin(&head2,6);
    InsertatBegin(&head2,7);

    Display(head1);
    printf("\n");
    Display(head2);
    printf("\n");

    Node * new_head = RemoveDuplicates(head1);
    Display(new_head);

    // Node * new_head = reverseWithRecursion(head2);
    // Display(new_head);

    // Node * new_head = swapPairofNodes(head2);
    // Display(new_head);


    // Node * new_head = UnionWithHashTable(head1,head2);
    // printf("\n");
    // Display(new_head);
    // printf("\n");
    // Node * Inter = IntersectionwithHashTable(head1,head2);
    // Display(Inter);

}
// I have to find Union between two list
// 1->3->5->7->9
// 2->3->4->6->7

// I have to check whether there exist loop or not.
//                q       p 
// 1->2->3->4
//        ^    ->5
///       6<-
//            
// do{
//     p = p->next;
//     q = q -> next;
//     if(q)q = q->next;
// }while(p && q && p!=q);

// if(p == q){
//     return true;
// }return false;