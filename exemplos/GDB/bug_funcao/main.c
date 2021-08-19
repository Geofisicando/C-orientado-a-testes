/*
* main.c (C)
* 
* Objetivo: Exemplo de programa com BUGs e funções para testar comandos do GDB.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 19/08/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include "funcoes.h"

int main(void){

	float f1;
	float f2;
	float f3,f4;

	f1 = 1.0;
	f2 = 2.0;

	f3 = soma(f1,f2);
	f4 = sub(f1,f2);

	printf("A soma de %f+%f é %f\n",f1,f2,f3);

	printf("A diferença de %f-%f é %f\n",f1,f2,f4);

}
