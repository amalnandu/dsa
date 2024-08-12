#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void oddEven(int num){
    if(num&1==num){
        printf("Even");
    }else{
        printf("Odd");
    }
}


int main() {
    
    
    return 0;
}