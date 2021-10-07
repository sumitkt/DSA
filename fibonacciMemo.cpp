#include<iostream>
using namespace std;
int array[6]={-1,-1,-1,-1,-1,-1};

int fib(int n){
    if(n<=1){
        array[n]=n;
        return n;
    }
    else{
        if(array[n-2]==-1){
            array[n-2]=fib(n-2);
        }
        if(array[n-1]== -1){
            array[n-1]=fib(n-1);
        }
        array[n]=array[n-2]+array[n-1];
        return array[n];


    }

}

int main(){


    cout<<fib(5)<<endl;
    for(int x:array){
        cout<<x<<endl;
    }
}