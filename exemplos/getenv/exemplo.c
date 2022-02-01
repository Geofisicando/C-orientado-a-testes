/*
* exemplo.c (C)
* 
* Objetivo: Exemplo de uso da função getenv.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 01/02/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	printf("HOME: %s\n",getenv("HOME"));
	printf("LINES: %s\n",getenv("LINES"));
	printf("COLUMNS: %s\n",getenv("COLUMNS"));
	printf("VAR: %s\n",getenv("VAR"));
}
