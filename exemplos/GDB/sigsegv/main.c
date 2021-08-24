/*
* main.c (C)
* 
* Objetivo: Exemplo de programa com erro de segmentação.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 26/01/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

	int* pi;

	/* Descomentar a linha abaixo para corrigir
	o erro de segmentação. Ou corrigir pelo GDB */
	//pi = (int*) malloc(sizeof(int));
	*pi = 5;

	return 0;
}
