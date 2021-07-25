#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void){

	pid_t childPIDorZero = fork();

	if(childPIDorZero < 0){
		fprintf(stderr,"Erro na chamada de sistema fork!\n");
		exit(1);
	}

	if(childPIDorZero != 0){ // Estou no processo pai
		printf("Estou no processo pai PID=%d Esperando meu filho PID=%d\n",getpid(),childPIDorZero);
		wait(NULL);
		printf("Pai encerrou...\n");
	}else{ // Estou no processo filho
		printf("Estou no processo filho PID=%d Meu pai tem PID=%d\n",getpid(),getppid());
		sleep(5);
		execl("/bin/echo","echo","Olá galera do canal!",NULL);
		// O código a seguir não será executado, pois a
		// chamada exec substitui o processo pai pelo filho
		sleep(5);
		printf("Filho encerrou...\n");
	}

}
