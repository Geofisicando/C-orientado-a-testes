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

void test_de_exemplo(){
	TEST_MESSAGE("Teste de exemplo com Unity!");
	TEST_ASSERT_EQUAL(1,1);
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_de_exemplo);
	return UNITY_END();
}
