#include<iostream>
using namespace std;
// print first n natural number
void PrintFirstN(int);
int main(){
int x=5;
PrintFirstN(x);


}

void PrintFirstN(int n){
    if(n<=0){
        return;
    }
    PrintFirstN(n-1);
    cout<<n<<endl;

}
