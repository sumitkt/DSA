#include<iostream>
using namespace std;

int main(){
    int8_t x= 6;

    while(x){
        printf("%d",x&1);
        x=x>>1;
    }
    

}

