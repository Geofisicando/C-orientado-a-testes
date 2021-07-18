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
    int i, j, k;
    
    MatrizSimetrica* mat = cria(2);
    
    atribui(mat, i, j, 1);
    atribui(mat, i, j, 2);
    atribui(mat, i, j, 4);
    atribui(mat, i, j, 7);
 
    if (acessa(mat, i, j) == mat->v[k]) {
        printf("matriz simetrica.\n");
    } else {
        printf("matriz nao simetrica.\n");
    }
    
    libera(mat);
    return 0;
}
