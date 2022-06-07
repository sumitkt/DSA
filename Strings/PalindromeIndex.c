#include<stdio.h>
#include<string.h>

int isPalindrome(char s[]){
    printf("%s",s);
    char p[strlen(s)];
    strcpy(p,s);
    // printf("%s",p);
    // printf("comp=%d",strcmp(s,p));
    if(strcmp(s,strrev(p))==0){
        return 1;
    }
    return 0;
}
int findIndex(char s[]){
    int i=0;
    int j = strlen(s)-1-i;
    while(i<j){
        if(s[i]!=s[j]){
            char s1[strlen(s)];
            strncpy(s1,s+(i+1),j-i);
            s1[j-i]='\0';
            int x = isPalindrome(s1);
            printf("x=%d",x);
            if(x){
                return i;
            }
            else{
                return j;
            }
        }
        i++;
        j=strlen(s)-1-i;
    }
    return -1;
}
int main(){

    char *s ="aaab";
    int ans = findIndex(s);
    printf("%d",ans);
    
}