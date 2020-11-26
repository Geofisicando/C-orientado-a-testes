#include "matriz.h"
#define LOGGING
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
 
void atribui (MatrizSimetrica* mat, int i, int j, float v) {
    int k;
    if (i<0 || i>=mat->dim || j<0 || j>=mat->dim) {
        printf("\nAtribuicao invalida.\n");
        exit(1);
    }
    
    if (i>=j)
        k = i*(i+1)/2 + j;
    else
        k = j*(j+1)/2 + i;
   
#ifdef LOGGING 
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,i,j,k);
#endif
    mat->v[k] = v;
}
 

