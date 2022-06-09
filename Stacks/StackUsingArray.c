#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int Size;
    int top;
    int * array;
}Stack;

/*
* Operations to define are 
* push(x) --> O(1)
* pop() --> O(1)
* peek() --> O(1)
* stacktop() --> O(1)
* IsEmpty() -->O(1)
* IsFull()  -->O(1)

*/

  /* IsFull takes a Stack as a parameter
  and Returns 1 if Stack is full else returns 0 */
int IsFull(Stack * s){

    if(s->top == ( (s->Size) - 1) ){
        return 1;
    }
    return 0;
}

    /* IsEmpty takes a Stack as a parameter and Returns 
    1 if Stack is Empty else returns 0 */

int IsEmpty(Stack *s){
    if(s -> top == -1){
        return 1;
    }
    return 0;

}

 /* push(x): it takes the Stack and the element which we want to push in the Stack
 and returns 1 on successfull insertion else returns 0 */

 int push(Stack * s,int x){
     /* First to check whether my stack is full . if full, we will print message */
     if(IsFull(s) == 1){
         printf("****The Stack is Full****\n");
         return 0;
     }
     /* If there is space available in the stack, then we will insert */
     s -> array[++(s -> top)] = x;
     return 1;

 }


 /* pop(): It takes the Stack and returns the top element in the stack
 and returns -1 if stack is empty */

 int pop(Stack * s){

     if(IsEmpty(s) == 1){
         printf("****The Stack is Empty****\n");
         return -1;
     }
     int popped_value =  s -> array[s -> top];
     (s -> top)--;
     return popped_value;
 }

    /* StackTop(): It returns the topmost element present in the stack.
    else returns -1, if stack is empty. */

 int StackTop(Stack * s){
     /* First check whether stack is Empty */
     if(IsEmpty(s) == 1){
         printf("****The Stack is Empty****\n");
         return -1;
     }
     return (s -> array)[s -> top];
 }






int main(void){
    Stack s1;
    printf("Enter the Size of the Stack\n");
    scanf("%d",&s1.Size);

    /* Allocating space for storing the elements */
    s1.array = (int*)malloc(sizeof(int)*(s1.Size));

    /* Initializing top...at the beginning top points to -1 */
    s1.top = -1;
    push(&s1,5);
    push(&s1,10);
    printf(" popped element: %d\n",pop(&s1));
    free(s1.array);


















}