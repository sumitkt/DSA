#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * stripStrings(char *s, int start_index, int end_index){

    char *ans = (char *)malloc(sizeof(char)*(end_index-start_index));
    int i ;
    for(i=0;i<(end_index-start_index)-1;i++){
        ans[i]=s[i+start_index];
    }
    ans[i]='\0';
    return ans;

}

int main(){
    char s[]="My name is Sumit Kumar Thakur";
    int words =1;

    char *ptr = s;
    while(*ptr != '\0'){

        if(*ptr == ' '){
            words++;
        }
        ptr++;
    }
    int start_index = 0,end_index=0,idx=0;
    char* A[words];
    ptr = s;
    while(*ptr != '\0'){

        if(*ptr != ' '){
            end_index++;
        }
        else{
            end_index++;
            A[idx++]=stripStrings(s,start_index,end_index);
            start_index=end_index;

        }
        ptr++;
    }
    A[idx]= stripStrings(s,start_index,end_index+1);

    for(int i =words-1;i>=0;i--){
        printf("%s\t",A[i]);
    }

    
}