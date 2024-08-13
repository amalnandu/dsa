#include<stdio.h>

void main(){
    int i,j,k,line;

    printf("enter the no.of lines\n");
    scanf("%d",&line);
    printf("\n\n");
    
    for(i=0;i<line;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=line;k>i;k--){
            printf("*");
        }printf("\n");
    }


}