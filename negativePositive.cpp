#include<iostream>
int * NegativePositive(int * array, int length);
void swap( int * p, int *q);
void Rearrange(int * array,int length);

int main(){
     int array[] ={-6,3,-8,10,5,-7,-9,12,-4,-2};

    //  int * newArray= NegativePositive(array,10);
    Rearrange(array,10);
     for(int i=0;i<10;i++){
         std::cout<<array[i]<<std::endl;
     }

}


// This solution takes O(n2);
int * NegativePositive(int * array, int length){

    int i=0,j;

    for( int i=0;i<length ; i++){
        if(array[i]<0){
            j=i;
            while( j>0){
                swap(&array[j],&array[j-1]);
                j--;
            }
        }
        else{
            continue;
        }
    }

    return array;
}

void swap( int * p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q= temp;
}


// O(n) solution

void Rearrange(int * array,int length){

    int i=0;
    int j= length-1;
    while(i<j){
        while(array[i]<0){i++;}
        while(array[j]>=0){j--;}

        if(i<j){
            swap(&array[i],&array[j]);
        }
    }
}