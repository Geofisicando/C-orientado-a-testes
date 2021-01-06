#include <stdio.h>

int main(void){

	float f1;
	float f2;
	float f3;
	int i;

	f1 = 1.0;
	f2 = 2.0;
	f3 = f1+f2;

	printf("A soma de f1+f2 é %f\n",f3);

	for(i=0;i<10;i++){

		printf("Valor de i=%d\n",i);
	}
}
