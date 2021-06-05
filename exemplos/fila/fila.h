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

/*int main(void){
	FILA f;
	criar(&f);
	inserir(&f,29,"Dirack");
	inserir(&f,44,"Fulano");
	inserir(&f,22,"Beltrano");
	listar(f);
	puts("**********");
	apagar(&f);
	listar(f);
}*/
