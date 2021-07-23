/*
* matriz.h (C)
* 
* Objetivo: Header funções matriz simétrica.
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

#ifndef _MATRIZ_H_
#define _MATRIZ_H_

struct mat {
    int dim;
    float* v;
};
 
typedef struct mat MatrizSimetrica;
 
MatrizSimetrica* cria (int n);
 
void libera (MatrizSimetrica* mat); 
 
float acessa (MatrizSimetrica* mat, int i, int j);
 
void atribui (MatrizSimetrica* mat, int i, int j, float v);

#endif 
