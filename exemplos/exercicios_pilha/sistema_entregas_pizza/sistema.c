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
	init(&p);
	int i;

	/* 1 - Portuguesa = 0
	   2 - Frango com catupiry = 3
	   3 - Calabresa = 2
	   4 - 4 queijos = 1
	*/

	push(&p,1);
	push(&p,2);
	push(&p,3);
	push(&p,0);

	for(i=0;i<4;i++){
		printf("%s\n",sabores[top(p)]);
		pop(&p);
	}
}
