/*
* matriz.c (C)
* 
* Objetivo: Definição de funções matriz simétrica.
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

#include "matriz.h"

MatrizSimetrica* cria (int n) {
    int s = n*(n+1)/2;
    MatrizSimetrica* mat = (MatrizSimetrica*) malloc(sizeof(MatrizSimetrica));
    mat->dim = n;
    mat->v = (float*) malloc(s*sizeof(float));
    return mat;
}
 
void libera (MatrizSimetrica* mat) {
    free(mat->v);
    free(mat);
}
 
float acessa (MatrizSimetrica* mat, int i, int j) {
    int k; /* indice do elemento no vetor */
    if (i<0 || i>=mat->dim || j<0 || j>=mat->dim) {
        printf("\nAcesso invalido.\n");
        exit(1);
    }
    if (i>=j)
        k = i*(i+1)/2 + j;
    else
        k = j*(j+1)/2 + i;
    
  #ifdef LOGGING
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,i,j,k);
  #endif
    return mat->v[k];
}
 
void atribui (MatrizSimetrica* mat, int linha, int coluna, float f) {
    int indice;
    if (linha<0 || linha>=mat->dim || coluna<0 || coluna>=mat->dim) {
        printf("\nAtribuicao invalida.\n");
        exit(1);
    }
    
    if (linha>=coluna)
        indice = linha*(linha+1)/2 + coluna;
    else
        indice = coluna*(coluna+1)/2 + linha;
   
#ifdef LOGGING 
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,linha,coluna,indice);
#endif
    mat->v[indice] = f;
}
 

