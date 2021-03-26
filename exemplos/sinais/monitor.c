#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int main(void){

	pid_t pid;
	int i;
	int j;
	int k;

	printf("Qual o PID do processo: "); scanf("%d",&i);
	pid = (pid_t) i;

	for(j=0;j<3;j++){
		printf("Enviando sinal 2 ao processo %d\n",i);
		k = kill(pid,2);
		sleep(10);
	}

	printf("Enviando sinal 15 ao processo %d\n",i);
	k = kill(pid,15);
}
