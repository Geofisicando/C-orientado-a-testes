#include "matriz.h"

MatrizSimetrica* cria (int numLinhasColunas) {
    
	int numElementosVetor = numLinhasColunas*(numLinhasColunas+1)/2;

	MatrizSimetrica* matriz = (MatrizSimetrica*) malloc(sizeof(MatrizSimetrica));
	matriz->dimensao = numLinhasColunas;
	matriz->vetor = (float*) malloc(numElementosVetor*sizeof(float));

	return matriz;
}
 
void libera (MatrizSimetrica* matriz) {
	free(matriz->vetor);
	free(matriz);
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

float acessa (MatrizSimetrica* matriz, int linha, int coluna) {
    
	int indice;

	verificaLinhaColunaValidas(matriz->dimensao,linha,coluna);

	indice = retornaIndiceVetor(linha,coluna);
    
  #ifdef LOGGING
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,linha,coluna,indice);
  #endif

    return matriz->vetor[indice];
}
 
void atribui (MatrizSimetrica* matriz, int linha, int coluna, float f) {
    
	int indice;

	verificaLinhaColunaValidas(matriz->dimensao,linha,coluna);
    
	indice = retornaIndiceVetor(linha,coluna);

#ifdef LOGGING 
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,linha,coluna,indice);
#endif
    matriz->vetor[indice] = f;
}
 

