/*
* _alloc.c (C)
* 
* Objetivo: Biblioteca genérica para o exemplo de criação de
* uma biblioteca dinâmica em C.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 12/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _ALLOC_H_
#define _ALLOC_H_

void* alloc(int n, size_t size){
	void* ptr;
	size *= n; // size = n*size

	ptr = malloc(size);
	if(ptr==NULL){
		fprintf(stderr,"%s: Erro não foi possível alocar %lu bytes\n",__FILE__,size);
		exit(1);
	}


	return ptr;
}


int* intalloc(size_t n){
	int* ptr;
	ptr = (int*) alloc(n,sizeof(int));
	return ptr;
}

float* floatalloc(size_t n){
	float* ptr;
	ptr = (float*) alloc(n,sizeof(float));
	return ptr;
}

char* charalloc(size_t n){
	char* ptr;
	ptr = (char*) alloc(n,sizeof(char));
	return ptr;
}

#endif

