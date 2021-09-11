#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
//call by value
// int area(struct Rectangle);
// int main(){
// Rectangle r={10,20};
// cout<<area(r)<<endl;
// }

// int area(Rectangle r1){
// return r1.length*r1.breadth;
// }
/******************call by refrence*********************/

// int area(struct Rectangle &);
// int main(){
// Rectangle r={10,20};
// cout<<area(r)<<endl;
// }

// int area(Rectangle &r1){
// return r1.length*r1.breadth;
// }

/**************CallbyAddress***************/
// int area(struct Rectangle *);
// int main(){
// Rectangle r={10,20};
// cout<<area(&r)<<endl;
// }

// int area(Rectangle *r1){
// return r1->length*r1->breadth;
// }
struct Rectangle * CreateStruct();
int main(){
struct Rectangle * n=CreateStruct();
cout<<n<<endl;



}

struct Rectangle * CreateStruct(){
struct Rectangle *p;
p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
cout << p<< endl;
return p;
}