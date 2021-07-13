/*
* pilha.c (C)
* 
* Objetivo: Exemplo de estrutura de dados do tipo pilha de ints em linguagem C.
* 
* Site: http://www.dirackslounge.online
* 
* Versão 1.0
* 
* Programador: Rodolfo Dirack 01/02/2020
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sNo
{
	int n;
	struct sNo *prox;
} NO;

void init(NO** pilha)
{
	*pilha = NULL;
}

void push(NO** pilha, int num)
/*< Ajuda da função push >*/
{
/* comentário qualquer */
	NO* tmp;
	tmp = (NO*) malloc(sizeof(NO));
	if(tmp==NULL) return;
	tmp->n = num;
	tmp->prox = *pilha;
	*pilha = tmp;
}

int empty(NO* pilha)
{
	return (pilha==NULL);
}

void pop(NO** pilha)
{
	NO* tmp = *pilha;
	if(empty(*pilha)) return;

	*pilha = (*pilha)->prox;
	free(tmp);
}

void print(NO* pilha)
{
	if (empty(pilha)) return;
	printf("%d \n",pilha->n);
	print(pilha->prox);
}

int top(NO* pilha)
{
	if(empty(pilha)) return -1;
	return pilha->n;
}

int main(void){

	NO* p;
	init(&p);
	printf("%s está vazia\n",empty(p)?"pilha":"pilha NÃO");
	print(p);
	puts("push 10");
 	push(&p,10);
	puts("push 20");
	push(&p,20);
	puts("push 30");
	push(&p,30);
	printf("top: %d está no topo da pilha\n",top(p));
	printf("%s está vazia\n",empty(p)?"pilha":"pilha NÃO");
	print(p);
	puts("pop");
	pop(&p);
	printf("top: %d está no topo da pilha\n",top(p));
	print(p);
	puts("pop");
	pop(&p);
	printf("top: %d está no topo da pilha\n",top(p));
	print(p);
	puts("pop");
	pop(&p);
	print(p);
	printf("%s está vazia\n",empty(p)?"pilha":"pilha NÃO");

}	









