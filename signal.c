#include <stdio.h>
#include <signal.h>
#include <unistd.h>




void hola (int signalNumb){
    printf("Recibi la señal %d", signalNumb);
}
int cond;
void terminarWhile(int signalNumb){
    printf("Terminando While\n");
    cond = 0;

}
int main(){
    signal(12,terminarWhile);
    signal(2,hola);
    cond = 1;
    while(cond==1){
        printf("Trabajando\n");
        sleep(1);


    }
    printf("Aqui nunca llega");
    return 0;
}