#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main(){
    int pid = fork();
    if (pid==0){
        printf("Soy el proceso hijo\n");
        //execl("/workspace/TC1104b.514/hola.exe", "hola.exe",NULL);
        execlp("hola.exe", "hola.exe",NULL);
        sleep(5);
        printf("nunca nunca nunca");
    }else{
        printf("Soy el proceso Padre\n");
        wait(NULL);
    }
    return 0;
}