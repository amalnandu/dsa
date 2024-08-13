#include<stdio.h>

int main(){
    int i,j,line,num=1;

    printf("enter the no. of rows");
    scanf("%d",&line);

    printf("\n\n");

    for(i=0;i<line;i++){
        for(j=0;j<i;j++){
            printf("%d ",num);
            num++;
        }printf("\n");
    }



    return 0;

}