#include <stdio.h>
#include<pthread.h>


void* printTen(){
 
    printf("Printing 10 numbers: ");
  
    for(int i=1;i<11;i++){
        printf("%d ",i);
        sleep(1);
    }

    return NULL;
}



int main() {
   
    
pthread_t printTen_thread;

printf("Before thread\n");
pthread_create(&printTen_thread,NULL,printTen,NULL);
pthread_join(printTen_thread,NULL);
printf("\nAfter thread");





    return 0;
}

