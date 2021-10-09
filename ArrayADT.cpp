#include<iostream>
using namespace std;
void Display(struct Array arr);
struct Array{
    int *A;
    int size; // size is the total size of the array
    int length; // length is the total number of element present in the array
};

int main(){
struct Array arr;
int n;
cout<<"Enter the size of the array:"<<endl;
cin>>arr.size;

arr.A=new int[arr.size];

cout<<"enter the number of elements:"<<endl;
cin>>n;

for(int i=0;i<n;i++){
    cin>>arr.A[i];
}
arr.length=n;
Display(arr);

}

void Display(struct Array arr){

    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}