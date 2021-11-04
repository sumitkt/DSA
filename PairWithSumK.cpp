// question: Given an  sorted array find the pairs with sum k //
// Time COmplexity=O((n))

// But if it is unsorte we can use hashtable but it will result in a space complexity of O(n);

#include<iostream>
using namespace std;


int main(){

    int array[]={1,3,4,6,7,8,9,10,11,12};
    int i=0,j=(sizeof(array)/sizeof(array[0]))-1;
    int K=10;
    
    while (i<j){
        if(array[i]+array[j]==K){
            cout<<"pairs are "<<array[i]<<"--"<<array[j]<<endl;
            i++;
            j--;
        }
        else if (array[i]+array[j]>K){
            j--;
        }
        else{
            i++;
        }
    }


}
