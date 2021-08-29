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
	int i;

	/* Alocar os vetores */
	vetorint = intalloc(5);
	vetorfloat = floatalloc(10);
	string = charalloc(20);

	/* Inicializar vetor de ints */
	for(i=0;i<5;i++)
		vetorint[i]=i;

	/* Inicializar vetor de floats */
	for(i=0;i<10;i++)
		vetorfloat[i]=1.0*i;

	/* Inicializar vetor de char (string) */
	memcpy(string,"Dirack",6);

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
}
