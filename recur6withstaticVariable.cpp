#include<iostream>
using namespace std;
//e(x,4)=1+(x/1)+(x^2/2!)+(x^3/3!)+(x^4/4!)
double taylorSeries(int x, int n);
static double numerator=1, denominator=1;
int main(){
 int x,n;
 
 cout<<"Enter the value of x:";
 cin>>x;
 cout<<"Enter the value of n:";
 cin>>n;
//cout<<taylorSeries(x,n)<<endl;
printf("%lf\n",taylorSeries(x,n));
}

double taylorSeries(int x, int n){
    if(n==0){
        return 1;
    }
    else{
       double ans=taylorSeries(x,n-1);
        numerator=numerator*x;
        denominator=denominator*n;
          
        return ans+double(numerator/denominator);
    }
}
