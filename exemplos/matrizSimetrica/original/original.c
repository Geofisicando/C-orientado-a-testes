#include <stdio.h>
#include <stdlib.h>
 
struct mat {
    int dim;
    float* v;
};
 
typedef struct mat MatrizSimetrica;
 
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
    return mat->v[k];
}
 
void atribui (MatrizSimetrica* mat, int i, int j, float v) {
    int k;
    if (i<0 || i>=mat->dim || j<0 || j>=mat->dim) {
        printf("\nAtribuicao invalida.\n");
        exit(1);
    }
    k = i*mat->dim+j;
    mat->v[k] = v;
}
 
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
