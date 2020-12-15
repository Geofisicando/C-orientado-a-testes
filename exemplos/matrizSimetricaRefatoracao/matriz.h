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
