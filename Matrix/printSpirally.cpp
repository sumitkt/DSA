#include<stdio.h>
#include<stdlib.h>

#define ROWS 4
#define COLS 5
// Declaring an array in heap

void printSpirall(int rows,int columns,int**b){

    int k=0, l=0;
    int last_rows=rows-1;
    int last_cols=columns -1;

    while(k<= last_rows && l<= last_cols){

        for(int i=l;i<=last_cols;i++){
            printf("%d\t",b[k][i]);
        }
        k++;
        for(int i=k;i<=last_rows;i++){
            printf("%d\t",b[i][last_cols]);
        }
        last_cols--;
        for(int i =last_cols; i>=l;i--){
            printf("%d\t",b[last_rows][i]);
        }
        last_rows--;
        for(int i= last_rows; i>=k;i--){
            printf("%d\t",b[i][l]);
        }
        l++;

        printf("\n");

    }

}
int main(){
    int **b;
    b=(int**)malloc(sizeof(int*)*ROWS);
    for(int i=0;i<ROWS;i++){
        b[i]=(int*)malloc(sizeof(int)*COLS);
    }
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The elements are\n");
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            //scanf("%d",&b[i][j]);
            printf("%d\n",b[i][j]);
        }
    }
    printSpirall(ROWS,COLS,b);
}