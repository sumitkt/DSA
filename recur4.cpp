#include<iostream>
using namespace std;
//  find exponent
int Exponent(int theNumber, int toThePower);
int main(){
    int x=2,y=5;
cout<<Exponent(2,20)<<endl;


}
int Exponent(int theNumber, int toThePower){

    if(toThePower<=1){
        return theNumber;
    }
    else{
        return theNumber*Exponent(theNumber,toThePower-1);
    }

}