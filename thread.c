#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 10
typedef struct threadData{
    int threadId;
    char name [20];
}ThreadData;
typedef char caracter;

void *holaMundo(void *arg){
    ThreadData *myData = (ThreadData *)arg;
    printf("Hola desde el hilo y mi ID es: %d \n",myData->threadId);
    pthread_exit(NULL);
}
int main(){
    for (int i = 0; i < 100; i ++){
    ThreadData myData;
    pthread_t threadId;
    myData.threadId = i;
    pthread_create(&threadId, NULL, holaMundo,(void *) &myData);
    }
    pthread_exit(NULL);
    printf("Nunca llega");
}