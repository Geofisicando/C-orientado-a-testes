/*
* _alloc.h (C)
* 
* Objetivo: Header de uma biblioteca genérica para o exemplo de
* criação de uma biblioteca dinâmica em C.
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

void* alloc(int n, size_t size);


int* intalloc(size_t n);

float* floatalloc(size_t n);

char* charalloc(size_t n);

#endif

