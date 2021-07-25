#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){

	pid_t childPIDorZero = fork();

	if(childPIDorZero < 0){
		fprintf(stderr,"Erro na chamada de sistema fork!\n");
		exit(1);
	}

	if(childPIDorZero != 0){ // Estou no processo pai
		printf("Estou no processo pai PID=%d\n",getpid());
		sleep(10);
		printf("Pai encerrou...\n");
	}else{ // Estou no processo filho
		printf("Estou no processo filho PID=%d\n",getpid());
		sleep(5);
		printf("Filho encerrou...\n");
	}

}
