/*
* test_bool.c (C)
* 
* Objetivo: Teste da função bool personalizada.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 14/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include "Unity/unity.h"
#include "_bool.h"

void setUp(){};

void tearDown(){};

void test_bool(){
	TEST_ASSERT_TRUE(true);
	TEST_ASSERT_FALSE(false);
}

int main(){
	UNITY_BEGIN();
	RUN_TEST(test_bool);
	return UNITY_END();
}
