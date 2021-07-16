/*
* exemplo.c (C)
* 
* Objetivo: Exemplo de uso de assert em C e da macro NDEBUG.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 16/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

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
