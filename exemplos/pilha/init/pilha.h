/*
* pilha.h (C)
* 
* Objetivo: Exemplo da implementação da pilha em C.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 13/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdlib.h>

struct sNo{
	int n;
	struct sNo* prox;
};

typedef struct sNo NO;

typedef NO* PILHA;

void init(PILHA* p){
	*p = NULL;
}

