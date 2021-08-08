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
 
void verificaLinhaColunaValidas(int dimensao, int linha, int coluna){
    
	if (linha<0 || linha>=dimensao || coluna<0 || coluna>=dimensao) {
		printf("\nAtribuicao invalida.\n");
		exit(1);
	}

}

int retornaIndiceVetor(int linha, int coluna){

	int indice;

	if (linha>=coluna)
		indice = linha*(linha+1)/2 + coluna;
	else
		indice = coluna*(coluna+1)/2 + linha;

	return indice;
}

float acessa (MatrizSimetrica* mat, int linha, int coluna) {
	
	int indice;
   
	verificaLinhaColunaValidas(mat->dim,linha,coluna);

	indice = retornaIndiceVetor(linha,coluna);

#ifdef LOGGING
	printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,linha,coluna,indice);
#endif

	return mat->v[indice];
}
 
void atribui (MatrizSimetrica* mat, int linha, int coluna, float f) {

	int indice;

	verificaLinhaColunaValidas(mat->dim,linha,coluna);

	indice = retornaIndiceVetor(linha,coluna);
  
#ifdef LOGGING 
	printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,linha,coluna,indice);
#endif
	mat->v[indice] = f;
}
 

