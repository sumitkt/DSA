#include<iostream>
#include<vector>
using namespace std;
bool checkIfExists(vector<int>&v, int element);
vector<int>  Union (int * arr1, int * arr2,int,int);
vector<int> UnionIfSortedArrays(int * arr1,int length1, int *arr2, int length2);
vector<int> Intersection(int * arr1, int length1,int * arr2, int length2);
vector<int> setDifference(int * arr1, int length1, int* arr2, int length2);



/* For finding UNion of two arrays
 if the given arrays aren't sorted....TimeComplexity is O(m + n*m) or we can say O{n2} if m==n;

But if Arrays are sorted, we can use merge procedure to find Union. Time Complexity:O{n+m} */



/* for finding Intersection
if the given arrays aren't sorted....TimeComplexity is O(m + n*m) or we can say O{n2} if m==n;
But if Arrays are sorted, we can use merge procedure to find Intersection. Time Complexity:O{n+m} */


/* for finding SetDifference
if the given arrays aren't sorted....TimeComplexity is O(m + n*m) or we can say O{n2} if m==n;
But if Arrays are sorted, we can use merge procedure to find SetDifference. Time Complexity:O{n+m} */






int main(){
    // int arr1[]={3,5,10,4,6}; // size = m
    // int arr2[]={12,4,7,2,5}; // size = n

    int arr1[]={3,4,5,6,10};
    int arr2[]={2,3,4,5,7};

    //vector<int> result=Union(arr1,arr2,5,5);
    //vector<int> result=UnionIfSortedArrays(arr1,5,arr2,6);
    //vector<int> result=Intersection(arr1,5,arr2,6);
    vector<int> result=setDifference(arr1,5,arr2,6);
    

    for(auto element:result){
        cout<<element<<endl;
    }
    return 1;
}

bool checkIfExists(vector<int>&v, int element){

    for(auto x:v){
        if(x == element){
            return true;
        }

    }
    return false;
}

vector<int>  Union (int * arr1, int * arr2,int length1, int length2){

    vector<int> v;
    for (int i=0;i<length1;i++){
        v.push_back(arr1[i]);
    } 
    cout<<"Inside Function:"<<endl;

    for( int i=0;i<length2;i++){
        if(checkIfExists(v,arr2[i])){
            continue;
        }
        else{
            v.push_back(arr2[i]);
        }
    }
    return v;
}


vector<int> UnionIfSortedArrays(int * arr1,int length1, int *arr2, int length2){

    int i=0,j=0;
    vector<int> v;
    while(i<length1 && j< length2){
        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i]>arr2[j]){
            v.push_back(arr2[j]);
            j++;
        }
        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(;i<length1;i++){
        v.push_back(arr1[i]);
    }    

    for(;j<length2;j++){
        v.push_back(arr2[j]);
    }

    return v;
}


vector<int> Intersection(int * arr1, int length1,int * arr2, int length2){


    int i=0,j=0;
    vector<int> v;

    while(i<length1 && j< length2){

        if(arr1[i]<arr2[j]){
            i++;
        }
        else if( arr1[i]> arr2[j]){
            j++;
        }
        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return v;
}


vector<int> setDifference(int * arr1, int length1, int* arr2, int length2){
    // arr1 - arr2

    int i=0, j=0;
    vector<int> v;

    while (i< length1 && j< length2){
        if(arr1[i]< arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    for(;i<length1;i++){
        v.push_back(arr1[i]);
    }
    return v;
}