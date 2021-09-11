#include<iostream>
using namespace std;
int *fun1(int);
int main(){
    int *p=fun1(5);
    cout<<p<<endl;




}
int * fun1(int n){
    // int A[5]={1,2,3,4,5};
    // return A;

    int *p;
    p=new int[n];
    cout<<p<<endl;
    return p;
}