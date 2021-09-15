#include<iostream>
using namespace std;
// factorial using recursion
int Factorial(int);
int main(){
int x=5;
cout<<Factorial(x)<<endl;
}
int Factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}