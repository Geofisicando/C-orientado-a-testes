/*
* fila.h (C)
* 
* Objetivo: Implementação da estrutura de dados fila.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 09/09/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sPessoa{
	int idade;
	char nome[20+1];
	struct sPessoa *prox;
} PESSOA;

typedef PESSOA *FILA;

void criar(FILA* f){
	*f = NULL;
}

void inserir(FILA* f, int idade, const char* nome){
	
	if(*f==NULL){
		*f = (PESSOA*) malloc(sizeof(PESSOA));
		if(*f==NULL) return;
		(*f)->idade=idade;
		strcpy((*f)->nome,nome);
		(*f)->prox=NULL;
	}else{
		inserir(&(**f).prox,idade,nome);
	}
}

void listar(FILA f){
	if(f==NULL) return;
	printf("%s %d\n",f->nome,f->idade);
	listar(f->prox);
}

void apagar(FILA* f){
	FILA tmp = *f;
	if(*f==NULL) return;
	*f = (*f)->prox;
	free(tmp);
}

