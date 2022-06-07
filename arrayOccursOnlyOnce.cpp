#include<bits/stdc++.h>
using namespace std;
int occursOnce(vector<int> &a, int n){
	// Write your code here.
    unordered_map<int,int> hashMap;
    for(int i=0;i<a.size();i++){
        hashMap[a[i]]++;
    }
    for(auto x: hashMap){
        if(x.second == 1){
            return x.first;
        }
    }
	
}

int main(){
    vector<int> a = {6,9,3,6,3};
    cout<<occursOnce(a,5)<<endl;
}