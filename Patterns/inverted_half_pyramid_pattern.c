#include<stdio.h>

void main(){

    int line;
    int i,j;

printf("enter the no.of lines\n");
scanf("%d",&line);
printf("\n\n\n");

for(i=1;i<=line;i++){
    for(j=i;j<=line;j++)
    {
        printf("*");

    }printf("\n");
}


}