#include <stdio.h>
#include <stdlib.h>
#include "_alloc.h"
#include <string.h>

int main(void){

	PESSOA* amigos;

	amigos = pessoaalloc(5);
	
	amigos[0].nome=charalloc(10);
	strcpy(amigos[0].nome,"Dirack");
	amigos[0].idade = 29;
	amigos[0].cpf = 90999;

	return 0;
}
