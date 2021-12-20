#include<iostream>
using namespace std;
int isValid(char *);
char * reverse(char * name);
// check whether a string is valid or not
int main(){
    char name[]="Anil?678"; //since this string contains a question mark .....this should be invalid
    if(isValid(name)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    printf("%s\n",reverse(name));
}

int isValid(char* name){
    int i=0;
    for(i=0;name[i]!='\0';i++){

        if(!(name[i]>='A' && name[i]<='Z') && !(name[i]>='a'&& name[i]<='z') && !(name[i]>='0' && name[i]<='9')){
            return 0;
        }

    }
    return 1;
}

char * reverse(char * name){
    
    int length=0;
    while(name[length]!='\0')
    length++;

    for(int i=0,j=length-1;i<length/2;i++,j--){

        char temp;
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
    return name;
}