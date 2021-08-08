/*
* main.c (C)
* 
* Objetivo: Programa principal da matriz simétrica.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 17/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    int i=0, j=0, k=0;
    
    MatrizSimetrica* mat = cria(2);
    
    atribui(mat, 0, 0, 1);
    atribui(mat, 0, 1, 2);
    atribui(mat, 1, 0, 4);
    atribui(mat, 1, 1, 2);


    for(j=0;j<2;j++){
	for(i=0;i<2;i++){
		printf(" %f",acessa(mat, i, j));
	}
	puts("\n");
    }     

    libera(mat);

    return 0;
}
