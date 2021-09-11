#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    //variable size array
    int A[n]={1,3};
    for(int x:A){
        cout<<x<<endl; 
    }
    
    //cout<<A[4]<<endl;
    return 0;
}