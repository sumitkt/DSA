// Monolithic way of Writing program;
//Best Practices
//1.Initialize the variables beforeHand.

#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area(Rectangle r1){
    return r1.length*r1.breadth;
}
int peri(Rectangle r2){
    return 2*(r2.length+r2.breadth);
}

int main(){

    Rectangle r;


    cout<<"Enter Length and breadth:"<<endl;
    cin>>r.length>>r.breadth;

    int a=area(r);
    int p=peri(r);

    cout<<a<<endl<<p<<endl;

}
