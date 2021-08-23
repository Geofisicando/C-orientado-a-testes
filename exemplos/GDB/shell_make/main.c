/*
* main.c (C)
* 
* Objetivo: Exemplo de programa simples com funções para testar os comandos do GDB.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 23/08/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>

float soma(float f1, float f2){
	return f1+f2;
}

float sub(float f1, float f2){
	return f1-f2;
}

float mul(float f1, float f2){
	return f1*f2;
}

float div(float f1, float f2){
	return f1/f2;
}

int main(void){

	float f1;
	float f2;
	float f3;
	int i;

	f1 = 1.0;
	f2 = 2.0;
	f3 = soma(f1,f2);

	printf("A soma de f1+f2 é %f\n",f3);

	for(i=0;i<10;i++){

		printf("Valor de i=%d\n",i);
	}
}
