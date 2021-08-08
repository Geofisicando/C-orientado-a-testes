/*
* matriz.h (C)
* 
* Objetivo: Protótipo das funções da matriz simétrica.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 08/08/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <stdio.h>
#include <stdlib.h>

#ifndef _MATRIZ_H_
#define _MATRIZ_H_

struct matrizsimetrica{
    int dimensao;
    float* vetor;
};
 
typedef struct matrizsimetrica MatrizSimetrica;
 
MatrizSimetrica* cria (int numLinhasColunas);
 
void libera (MatrizSimetrica* matriz); 
 
float acessa (MatrizSimetrica* matriz, int linha, int coluna);
 
void atribui (MatrizSimetrica* matriz, int linha, int coluna, float f);

#endif 
