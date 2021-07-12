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

