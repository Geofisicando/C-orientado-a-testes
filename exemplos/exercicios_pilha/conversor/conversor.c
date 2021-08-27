/*
* conversor.c (C)
* 
* Objetivo: Conversor de número inteiro decimal para binário.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 27/08/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <stdio.h>
#include "pilha.h"

int main(void){
	int numerador, resto;
	PILHA p;
	init(&p);

	printf("Introduza um número inteiro: ");
	scanf("%d",&numerador);

	/* 30/2 = 15 resto 0
	   15/2 = 7 resto 1
	   7/2  = 3 resto 1
	   3/2  = 1 resto 1
	   1/2  = 0 resto 1
		30 = 11110
	*/
	while(1){
		if(numerador==0) break;
		resto = numerador%2;
		numerador = numerador/2;
		push(&p,resto);
	}

	print(p);
	puts("");
}
