#include<iostream>
using namespace std;

int main(){
int x;
int *p;
p= new int[5];
for(int i=0;i<5;i++){
    cin >> x;
    p[i]=x;
}

for(int i=0;i<5;i++){
    cout << p[i];
}

// creating new array
int *q= new int[10];
for(int i=0;i<5;i++){
    q[i]=p[i];
}
delete []p;
p=q;
q=NULL;

for(int i=0;i<10;i++){
    cout<<p[i]<<endl;
}


}