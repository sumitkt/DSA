#include<iostream>
using namespace std;

int main(){
    char a[]="How are you and cric gjom ollls?";

    int vowel_count=0, conso_count=0,words=0,spaces=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'
        ||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            vowel_count++;

        }
        else if ((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z')){
            conso_count++;
        }
        else if(a[i]==' ' && a[i-1]!=' '){
            words++;
            spaces++;
        }
        else if(a[i]==' '){
            spaces++;
        }

    }

    cout<<"vowels:"<<vowel_count<<" "<<"consonant:"<<conso_count<<" "<<"words:"<<words+1<<"spaces:"<<spaces<<endl; 
}