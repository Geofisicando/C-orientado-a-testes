#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define NUM_SABORES 4
#define MAX_STRING_SIZE 40

char sabores[NUM_SABORES][MAX_STRING_SIZE]={
"Portuguesa","4 queijos","Calabresa","Frango com catupiry"
};

int main(void){
	PILHA p;
	PILHA e;
	init(&p);
	init(&e);
	int i, pedido;

	/* 1 - Portuguesa = 0
	   2 - Frango com catupiry = 3
	   3 - Calabresa = 2
	   4 - 4 queijos = 1
	*/
	while(1){
		printf("Escolha um sabor (-1 para encerrar):\n");
		printf("0 - Portuguesa\n1 - 4 queijos\n2 - Calabresa\n3 - Frango com catupiry\n");
		scanf("%d",&pedido);

		if(pedido==-1)break;

		if(pedido<0 || pedido > NUM_SABORES-1){
			printf("Pedido inválido!\n");
		}else{
			push(&p,pedido);
		}
	}

	while(!empty(p)){
		push(&e,top(p));
		pop(&p);
	}

	while(!empty(e)){
		printf("%s\n",sabores[top(e)]);
		pop(&e);
	}
}
