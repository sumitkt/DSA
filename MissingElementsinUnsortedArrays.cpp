#include<iostream>
#include<vector>
using namespace std;

// Finding the missing element from unsorted array
// this takes a timeComplexity of O{n} with a space complexity of O{n}.

typedef struct MinMax{

    int min;
    int max;

}MinMax;
MinMax findMinandMax(int * array, int length);

int main(){
    int array[]={18,17,10,9,4,8,9,6,12};

    MinMax result= findMinandMax(array, (sizeof(array))/(sizeof(array[0])));
    int lower_num=result.min;
    int higher_num= result.max;

    vector<int> hashTable (higher_num,0);
    for(auto element:hashTable){
        cout<<element<<endl;
    }

    for( int i=0;i<((sizeof(array))/(sizeof(array[0])));i++){
        hashTable[array[i]]++;
    }
    for( int i =lower_num;i<higher_num;i++){
        if(hashTable[i]==0){
            cout<<"Missing elements:"<<i<<endl;
        }
    }

}

MinMax findMinandMax(int * array, int length){

    MinMax result;
    result.min=array[0];
    result.max=array[0];

    for(int i=1;i<length;i++){

        if(array[i]<result.min){
            result.min=array[i];
        }
        else if(array[i]>result.max){
            result.max=array[i];
        }
        
    }
return result;
    
}