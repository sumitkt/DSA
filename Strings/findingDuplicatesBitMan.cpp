#include<iostream>
using namespace std;

// here the concept of Masking and Merging is used.
int main(){
    char a[]="findingthefanny"; //considering only small case letter
    cout<<sizeof(int)<<endl;
    int Hashing=0;
    int x=0;
    for(int i=0;a[i]!='\0';i++){

        x=1;
        x=x<<(a[i]-97);
        if((x&Hashing)>0){
                printf("%c\t",a[i]);
        }
        else{
            Hashing=Hashing|x;
        }

    }
}


