#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


char *initializeString(){
    
    int len = 1;
    int i;
    char*p = (char*)malloc(sizeof(char)*len);
    
    char ch = getche();
    *p = ch;
    
    do{
    char * q =(char *)malloc(sizeof(char)*(len+1));
    
    for(i=0;i<len;i++){
        *(q+i)=*(p+i);
    }
    *(q+i)='\0';
    free(p);
    len++;
    p =(char*)malloc(sizeof(char)*len);
    
    for(i=0;i<len;i++){
        *(p+i)=*(q+i);
    }
    free(q);
    ch = getche();
    *(p+(len-1))=ch;
        
    }while(ch != 13);
    
    char * q = (char *)malloc(sizeof(char)*len);
    for(i=0;i<len;i++){
        *(q+i)=*(p+i);
    }
    *(q+(i-1))='\0';
    free(p);
    
    return q;
    
    
}
char * reverse(char *s,int st_index,int end_index){
    char *new_str = malloc(sizeof(char)*(end_index-st_index));
    int i;
    for(i=0;i<(end_index-st_index)-1;i++){
        new_str[i]=s[i+st_index];
    }
    new_str[i]='\0';
    //printf(" Inside function: %s\n",new_str);

    int j = strlen(new_str)-1;
    i=0;
    while(i<j){
        char temp = new_str[i];
        new_str[i]=new_str[j];
        new_str[j]= temp;
        i++;
        j--;
    }
    return new_str;

}

void ReverseString(char *s){
    int i,count=0,start_index=0;
    int length = strlen(s);
    
    for(i=0;i<length;i++){
        if(s[i]!= ' '){
            count++;
            
        }
        else{
            count++;
            char* ans = reverse(s,start_index,count);
            printf("%s\t",ans);
            free(ans);
            start_index=count;
        }
    }
    char * ans1 = reverse(s,start_index,count+1);
    printf("%s",ans1);
    free(ans1);

}
void concatenate(char *s,char*p){
    while(*s != '\0'){
        s++;
    }
    while(*p != '\0'){
        *s++ = *p++;
    }
    *s='\0';
    

}
// int main(){
//   // string reverse
  
  
// }

int main(){
    char s[20]="sumit kumar kumar";
  char p[20]="Thakur";
  printf("before: %s\n",s);
  concatenate(s,p);
  printf("after: %s",s);


    

    
    
}
