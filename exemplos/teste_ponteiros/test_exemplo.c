/*
* test_exemplo.c (C)
* 
* Objetivo: Exemplo de teste unitário de ponteiros com o Unity
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 30/08/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include "Unity/unity.h"
#include <stdio.h>
#include "_alloc.h"

void setUp(){};

void tearDown(){};

void test_ponteiro_ponteiro(){
	int *i;
	int *j;

	i = j;

	TEST_ASSERT_EQUAL_PTR(i,j);
}

void test_ponteiro_variavel(){
	int *i;
	int x;

	i = &x;

	TEST_ASSERT_EQUAL_PTR(i,&x);
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_ponteiro_ponteiro);
	RUN_TEST(test_ponteiro_variavel);
	return UNITY_END();
}
