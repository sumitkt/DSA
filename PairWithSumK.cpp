// question: Given an  sorted array find the pairs with sum k //
// Time COmplexity=O((n))

// But if it is unsorte we can use hashtable but it will result in a space complexity of O(n); But if numbers are negative ...it is better to use
// unordered map.

#include<iostream>
using namespace std;
int fun1();
void fun2();

#include<unordered_map>
#include<vector>

int main(){
    fun2();

return 0;
}

void fun2(){

unordered_map<int , int> hashMap;
int myArray={4,4,3,5,6};
vector<pair<int,int>> ans;

for (int i = 0; i< sizeof(myArray)/sizeof(myArray[0]); i++){
    hashMap[myArray[i]]++;
}

for(auto x:hashMap){
    cout<<x<<endl;
}


}

int fun1(){

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
