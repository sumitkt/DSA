#include<iostream>
using namespace std;
// taylor series
//e(x,5)=1+(x/1)+(x^2/2!)+(x^3/3!)+(x^4/4!)
double TaylorSeries(int x,int n);
double Factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}

double Exponent(int theNumber, int toThePower){

    if(toThePower<=1){
        return theNumber;
    }
    else{
        return theNumber*Exponent(theNumber,toThePower-1);
    }

}
int main(){
    int x=2,y=5;
    cout<<TaylorSeries(3,10)<<endl;



}

double TaylorSeries(int x,int n){

    if(n<=1){
        return 1;
    }
    else{
        // int ans= (Exponent(x,n-1)/(Factorial(n-1)))+TaylorSeries(x,n-2);
        // cout<<"Inside Taylor series:"<<ans<<endl;
        // return ans;

        double ans1=Exponent(x,n-1);
        double ans2=Factorial(n-1);
        double ans3=(ans1)/(ans2);
        return ans3+TaylorSeries(x,n-1);
    }
}
