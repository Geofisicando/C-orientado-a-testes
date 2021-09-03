/*
* main.c (C)
* 
* Objetivo: Implementar função de alocação dinâmica personalizada.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 29/08/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>
#include "_alloc.h"
#include <string.h>

int main(void){
	int *vetorint;
	float *vetorfloat;
	char *string;
	PESSOA *amigos;
	int i;

	/* Alocar os vetores */
	vetorint = intalloc(5);
	vetorfloat = floatalloc(10);
	string = charalloc(20);
	amigos = pessoaalloc(3);

	/* Inicializar vetor de ints */
	for(i=0;i<5;i++)
		vetorint[i]=i;

	/* Inicializar vetor de floats */
	for(i=0;i<10;i++)
		vetorfloat[i]=1.0*i;

	/* Inicializar vetor de char (string) */
	memcpy(string,"Dirack",6);
	string[6]='\0';

	/* Inicializar vetor de pessoas */
	amigos[0].nome = charalloc(10);
	strcpy(amigos[0].nome,"Fulano");
	amigos[0].idade = 35;
	amigos[0].cpf = 99999;
	
	amigos[1].nome = charalloc(10);
	strcpy(amigos[1].nome,"Cicrano");
	amigos[1].idade = 18;
	amigos[1].cpf = 88888;

	amigos[2].nome = charalloc(10);
	strcpy(amigos[2].nome,"Beltrano");
	amigos[2].idade = 40;
	amigos[2].cpf = 77777;

	/* Usar os vetores */
	printf("Meu nome é %s\n",string);

	printf("Exibir vetor de int: ");
	for(i=0;i<5;i++)
		printf("%d ",vetorint[i]);
	puts("");

	printf("Exibir vetor de float: ");
	for(i=0;i<10;i++)
		printf("%.2f ",vetorfloat[i]);
	puts("");

	printf("Meus amigos:\n");
	for(i=0;i<3;i++){
		printf("Nome: %s Idade: %d CPF: %d",
		amigos[i].nome,amigos[i].idade,amigos[i].cpf);
		puts("");
	}
}
