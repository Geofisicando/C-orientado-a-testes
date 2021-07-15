/*
* monitor.c (C)
* 
* Objetivo: Exemplo de programa para monitorar e enviar sinais para processos.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 15/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

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

	printf("Qual o PID do processo:\n"); scanf("%d",&i);
	pid = (pid_t) i;

	for(j=0;j<3;j++){
		printf("Enviando sinal 2 ao processo %d\n",i);
		k = kill(pid,2);
		sleep(10);
	}

	printf("Enviando sinal 15 ao processo %d\n",i);
	k = kill(pid,15);
}
