#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){

	pid_t pid;
	int i;
	int j;

	printf("Qual o PID do processo: "); scanf("%d",&i);
	pid = (pid_t) i;

	/* Manipula o processo */
	for(j=0;j<3;j++){
		printf("Enviando sinal ao processo...\n");
		i = kill(pid,2);
		sleep(10);
	}

	i = kill(pid,15);
}
