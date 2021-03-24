/*
* sinais.c (C)
* 
* Objetivo: Exemplo de utilização de sinais e processos.
* Utilize os comandos 'kill -15 PID' ou 'kill -2 PID' para
* enviar sinais para este processo.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 23/03/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int a=0;

void tratasinal(int sinal)
/*< Função resposta ao sinal 15: Encerra a execução >*/
{
	printf("Encerrando a execução...\n");
	exit(15);
}

void reinicia_a(int sinal)
/*< Função resposta ao sinal 2: Reiniciar valor de a >*/
{
	printf("Reiniciando valor de a...\n");
	a=0;
}


int main(void){

	/* Vincula os sinais 15 e 2 às funções */
	signal(15,tratasinal);
	signal(2,reinicia_a);

	/* Imprime o PID do processo atual*/
	printf("PID=%d\n",getpid());

	/* Looping infinito a cada 3 segundos */
	while(1){
		printf("a=%d\n",a);
		a++;
		sleep(3);
	}
}
