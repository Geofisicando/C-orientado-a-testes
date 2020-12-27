#include <stdio.h>
//#define NDEBUG
#include <assert.h>
#include <math.h>
 
int main(void)
{
	short int nota;

	printf("Qual a nota do aluno? "); scanf("%hd",&nota);
	
	/* Verificar se a nota está entre 0 e 10 */
	#ifndef NDEBUG
	printf("%s: %s: nota=%hd\n",__FILE__,__FUNCTION__,nota);
	#endif
	assert(nota >= 0 && nota <=10);

	printf("O aluno foi %s\n",(nota<7)? "reprovado":"aprovado");   
 
	return 0;
}
