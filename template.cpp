// Class way 

#include<iostream>
using namespace std;
template <class T>
class Rectangle{
    private:

    T length;
    T breadth;

    public:
    Rectangle(T a,T b);
    T area();
    T Perimeter();
};
template<class T>
Rectangle<T>::Rectangle(T a,T b){
    this->length=a;
    this->breadth=b;

}
template<class T>
T Rectangle<T>::area(){
    return length*breadth;
}
template<class T>
T Rectangle<T>::Perimeter(){
    return 2*(length+breadth);
}

int main(){

Rectangle<int> r1(10,20);
Rectangle<float> r2(1.88,4.55);

cout<<r1.area()<<endl;
cout<<r2.area()<<endl;




}

