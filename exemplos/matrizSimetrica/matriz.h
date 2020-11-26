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
