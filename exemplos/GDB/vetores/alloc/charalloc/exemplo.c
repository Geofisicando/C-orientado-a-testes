#include <stdio.h>
#include <stdlib.h>
#include "_alloc.h"
#include <string.h>

int main(void){

	char *s;

	s = charalloc(10);

	strcpy(s,"Dirack");

	printf("Olá, meu nome é %s\n",s);

	return 0;
}
