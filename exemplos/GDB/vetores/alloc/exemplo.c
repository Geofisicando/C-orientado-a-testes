#include <stdio.h>
#include <stdlib.h>
#include "_alloc.h"

int main(void){

	int *i;
	float *f;
	char *c;

	i = intalloc(5);
	f = floatalloc(10);
	c = charalloc(10);

	return 0;
}
