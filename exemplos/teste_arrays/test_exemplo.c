/*
* test_exemplo.c (C)
* 
* Objetivo: Exemplo de teste unitário de arrays com o Unity
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 04/09/2021
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

void test_array_int_fail(){
/*< Este teste irá falhar, pois os arrays são diferentes >*/
	int *i;
	int *j;
	i = intalloc(2); i[0]=1; i[1]=4;
	j = intalloc(2); j[0]=1; j[1]=2;

	TEST_ASSERT_EQUAL_INT_ARRAY(i,j,2);
}

void test_array_int_success(){
/*< Este teste irá passar, pois os arrays são iguais >*/
	int *i;
	int *j;
	i = intalloc(2); i[0]=1; i[1]=4;
	j = intalloc(2); j[0]=1; j[1]=4;

	TEST_ASSERT_EQUAL_INT_ARRAY(i,j,2);
}



int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_array_int_fail);
	RUN_TEST(test_array_int_success);
	return UNITY_END();
}
