#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

int binarytoDecimal(char * binary, int length){
 int ans=0;
 int power=0;
 int last_index= length-1;
 while(last_index >=0){
    ans += binary[last_index] * pow(2,power);
    power++;
    last_index --;
 } 
 return ans;
}

int main(){
    char binary[]="10101011";
    cout<<binarytoDecimal(binary,8);
}

