#include<iostream>
using namespace std;

int main(){
    int array[]={6,7,8,9,11,12,13,16,17};

    int lower_num = array[0];
    int higher_num = array[(sizeof(array)/sizeof(array[0]))-1];

    int difference = lower_num - 0;

    for(int i=0;i<(sizeof(array)/sizeof(array[0]));i++){

        if((array[i]-i)!= difference){
            while(difference < (array[i]-i)){
                cout<<"Missing elements:"<<difference+i<<endl;
                difference++;
            }
        }
        else{
            continue;
        }
    }
}