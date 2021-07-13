/*
* test_exemplo.c (C)
* 
* Objetivo: Exemplo de teste unitário com o Unity
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

#include "Unity/unity.h"
#include <stdio.h>

void setUp(){};

void tearDown(){};

void test_problema_precisao(){
/*< Estes testes irão passar erroneamente >*/
	TEST_ASSERT_EQUAL(2.0,2.9);
}

void test_de_float(){
	TEST_ASSERT_FLOAT_WITHIN(0.1,2.0,2.1);
	TEST_ASSERT_FLOAT_WITHIN(0.1,2.0,1.91);
}

void test_ignorar(){
	TEST_IGNORE();
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_problema_precisao);
	RUN_TEST(test_de_float);
	RUN_TEST(test_ignorar);
	return UNITY_END();
}
