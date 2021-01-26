#include <stdio.h>
#include "funcoes.h"

int main(void){

	float f1;
	float f2;
	float f3,f4;

	f1 = 1.0;
	f2 = 2.0;

	f3 = soma(f1,f2);
	f4 = sub(f1,f2);

	printf("A soma de %f+%f é %f\n",f1,f2,f3);

	printf("A diferença de %f-%f é %f\n",f1,f2,f4);

}
