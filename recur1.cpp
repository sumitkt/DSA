#include<iostream>
using namespace std;
// sum of first n natural number
int SumOfN(int n);

int main(){
int x=5;
int ans=SumOfN(x);
cout<<ans<<endl;
}
int SumOfN(int n){

    if(n<=0){
        return 0;
    }
    else{
        return n+SumOfN(n-1);
    }


}