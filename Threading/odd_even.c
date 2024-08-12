#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>



typedef struct{
    int lower;
    int upper;

}Limits;



void* printOdd(void* args){
    Limits* limits =(Limits*)args;

    int lowerlimit = limits->lower;
    int upperlimit = limits->upper;

    printf("Printing odd numbers: ");
    for(int i=lowerlimit;i<upperlimit;i++){
        if(!(i%2==0)){
            
            printf("%d ",i);
        }
    }
    printf("\n");
    return NULL;
}


void* printEven(void* args){

    Limits* limits = (Limits*)args;
    int lowerlimit = limits->lower;
    int upperlimit = limits->upper;

        printf("Printing even numbers: ");
        for(int i=lowerlimit;i<upperlimit;i++){
        if(i%2==0){
            
            printf("%d ",i);
        }
    }
printf("\n");
    return NULL;
}



int main() {

Limits limits = {1, 20};
pthread_t oddThread,evenThread;
pthread_create(&oddThread,NULL,printOdd,(void*)&limits);
pthread_create(&evenThread,NULL,printEven,(void*)&limits);

pthread_join(oddThread,NULL);
pthread_join(evenThread,NULL);
    
    return 0;
}