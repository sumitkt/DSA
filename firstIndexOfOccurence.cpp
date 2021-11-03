#include<iostream>
using namespace std;

int function(int * s,int size,int value);
int main(){

int array[]={2,3,9,8,7,6,4,12,7,3,8};
cout<< function(array,11,3)<<endl;;
cout<< function(array,11,12)<<endl;
cout<< function(array,11,7)<<endl;
cout<< function(array,11,)<<endl;


}

int function(int * s,int size,int value){
int chk= 0;
int index=-1;
    for(int i=0;i<size;i++){
        if(s[i]== value){
            if(s[i]==chk){
                continue;
            }
            else{
                chk=s[i];
                index=i;

            }
        }
        else{
            continue;
        }

    }
    return index;

}