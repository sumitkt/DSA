// Monolithic way of Writing program;
//Best Practices
//1.Initialize the variables beforeHand.

#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
void Initialize(Rectangle * p,int l,int b){
    p->length=l;
    p->breadth=b;
}
int area(Rectangle r1){
    return r1.length*r1.breadth;
}
int peri(Rectangle r2){
    return 2*(r2.length+r2.breadth);
}

int main(){

    Rectangle r;

    
    int length=0,breadth=0;

    cout<<"Enter Length and breadth:"<<endl;
    cin>>length>>breadth;
    initialize(&r,length,breadth);

    int a=area(r);
    int p=peri(r);

    cout<<a<<endl<<p<<endl;

}
