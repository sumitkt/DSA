#include<iostream>
using namespace std;
//in case of  arrays, pointer variable acts a array name;

int main(){

    int *p;
    p=new int[5];
    
    // cout<<A<<endl;
    // cout<<&A<<endl;
    // cout<<A+1<<endl;
    // cout<<A+2<<endl;
    // cout<<A+3<<endl;
    // cout<<A+4<<endl;
    // cout<<A+5<<endl;
    // cout<<&A+1<<endl;
    
    for(int i=0;i<5;i++){
        cin>>p[i]<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<*(p+i)<<endl;
    }
}