#include<iostream>
using namespace std;

int main(){
int a=10;
int &r=a;
r=25; // r is a refrence variable
cout<<a<<"-->"<<r<<endl;
int b=30;
r=b;
cout<<a<<"-->"<<r<<endl;


}