#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int main(){

    //Rectangle r={10,20};
    Rectangle *p;
   // p=(Rectangle*)malloc(sizeof(Rectangle));
   p=new Rectangle;
    p->length=30;
    p->breadth=70;
    //cout<<r.length<<endl<<r.breadth<<endl;
    cout<<p->length<<endl<<p->breadth<<endl;

}