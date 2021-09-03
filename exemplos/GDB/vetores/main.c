/*
* main.c (C)
* 
* Objetivo: Exemplo de vetor, alocação estática e dinâmica.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 03/09/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int ve[5]={1,2,3,4,5}; // Alocação estática
	int *vd; // Alocação dinâmica

	vd = (int*) malloc(5*sizeof(int));

	return 0;
}
