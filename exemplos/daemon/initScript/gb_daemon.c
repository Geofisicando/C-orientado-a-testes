/*
* gb_daemon.c (C)
* 
* Objetivo: Daemon gb_daemon.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 28/10/2019
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include "daemon.h"
#include <unistd.h>

#define SLEEP_TIME 120

int main(int argc, char *argv[]) {
    
	/* Transformar o processo atual em um Daemon */
	daemonize();
	
	/* Iniciar o logging em /var/log/syslog */
	syslog(LOG_NOTICE, "Início do programa!");
	
	/* Looping principal - Emite uma mensagem de logging a cada SLEEP_TIME segundos */
	while (1) {
		syslog(LOG_INFO, "O programa irá dormir por %d segundos...", SLEEP_TIME);
 		sleep(SLEEP_TIME);
   		syslog(LOG_INFO, "O programa acordou!");
 	}

	return 0;
}
