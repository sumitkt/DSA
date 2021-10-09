#include<iostream>
using namespace std;

void TOH(int pegs, char source, char destination, char auxillary);

int main(){
    int pegs;
    cout<< "Enter the number of pegs:"<< endl;
    cin>> pegs;

    TOH(pegs,'A','B','C');

}
void TOH(int pegs,char source, char destination, char auxillary){
    if(pegs ==1){
        cout<<"Move "<<pegs<<" from "<<source<<"to "<<destination<<endl; 
    }
    else{
        TOH(pegs-1,source,auxillary,destination);
        cout<<"Move "<<pegs<<" from "<<source<<"to "<<destination<<endl;
        TOH(pegs-1,auxillary,destination,source);
    }
}