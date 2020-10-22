/*
* test_example.c (C)
* 
* Objetivo: Exemplo de automatização dos testes com Makefile.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 22/10/2020
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include "Unity/unity.h"

void setUp(){};

void tearDown(){};

void test_example(){
	TEST_ASSERT_MESSAGE(1==1,"Mensagem de erro! Teste 1 Falhou!");
	TEST_ASSERT_MESSAGE(1==1,"Mensagem de erro! Teste 2 Falhou!");
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_example);
	return UNITY_END();
}
