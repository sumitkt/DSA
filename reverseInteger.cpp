#include<iostream>
using namespace std;
#include<math.h>
double findLength(int32_t number);
int32_t reverseInt(int32_t number);

int32_t main(){
// cout<< findLength(-123) << endl;
cout<< reverseInt(INT32_MAX)<< endl;
cout<<INT32_MIN<<endl;
}

int32_t reverseInt(int32_t number){
   int sum=0;
   while (number != 0 ){
       int rem = number % 10;
       if ((sum < INT32_MIN / 10) || (sum > INT32_MAX / 10 ) ){
           return 0;
       }
       sum = (sum*10) + rem;
       number = number / 10; 
   }
   return sum;
}

// double findLength(int32_t number){

//     double count=0.0;
//     while ( number / 10 != 0){
//         count++;
//         number= number / 10;
//     }
//     return count;
// }
