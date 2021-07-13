/*
* pilha.c (C)
* 
* Objetivo: Exemplo de estrutura de dados do tipo pilha de strings em C.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 06/04/2020
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
	char* fruta;
	struct No* prox;
} no;

typedef struct No*  pilha;

void init(pilha *p){
	*p=NULL;
}

int isempty(pilha p){
	return (p==NULL);
}

void push(pilha *p, char* c){
	no* tmp;
	tmp = (no*) malloc(sizeof(no));
	if(tmp==NULL) return;
	tmp->fruta = c;
	tmp->prox = *p;
	*p = tmp;
}

void print(pilha p){
	if(isempty(p)){
		printf("\n");
		return;
	}
	printf("%s ",p->fruta);
	print(p->prox);
}

void pop(pilha* p){
	no* tmp = *p;
	if(isempty(*p)) return;
	*p = (*p)->prox;
	free(tmp);
}

char* top(pilha p){
	if(isempty(p)) return NULL;
	return p->fruta;
}

int main(void){

	pilha p;
	init(&p);
	printf("topo=%s\n",top(p));
	push(&p,"Maçã");
	printf("topo=%s\n",top(p));
	print(p);
	push(&p,"Laranja");
	printf("topo=%s\n",top(p));
	print(p);
	push(&p,"Uva");
	printf("topo=%s\n",top(p));
	print(p);
	pop(&p);
	printf("topo=%s\n",top(p));
	print(p);	
}

