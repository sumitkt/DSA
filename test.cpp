#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> arr1 ={
  2 ,4 ,6 ,8 ,0 ,0};
vector<int> arr2 ={2 ,9};


int i=0;
    int j=0;
    
    while(i < arr1.size() && j< arr2.size()){
        	if(arr1[i]< arr2[j]){
                i++;
                // if(arr1[i]==arr2[j]){
                //     j++;
                // }
                continue;
            }
            // else if( arr1[i] == arr2[j]){
            //     i++;
            //     j++;

            // }
        	else {
                for(int k= arr1.size()-1;k>i; k--){
                    arr1[k] = arr1[k-1];
                }
                arr1[i]=arr2[j];
                i++;
                j++;
            
            }
    }
    i=i-1;
    int k=j;
    j=arr2.size()-1;
    while(j>=k){
        arr1[i]=arr2[j];
        j--;
        i--;
    }



for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<endl;
}






}