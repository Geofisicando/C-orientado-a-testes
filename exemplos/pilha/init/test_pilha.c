/*
* test_pilha.c (C)
* 
* Objetivo: Exemplo de suíte de testes para a implementação de uma pilha em C.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 13/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include "Unity/unity.h"
#include "pilha.h"

void setUp(){};

void tearDown(){};

void test_init(){
	PILHA p;
	init(&p);
	TEST_MESSAGE("init");
	TEST_ASSERT_NULL(p);
}

void test_push(){
	TEST_IGNORE_MESSAGE("Not implemented!");
}

void test_pop(){
	TEST_IGNORE_MESSAGE("Not implemented!");
}

void test_top(){
	TEST_IGNORE_MESSAGE("Not implemented!");
}

void test_empty(){
	TEST_IGNORE_MESSAGE("Not implemented!");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_init);
	RUN_TEST(test_push);
	RUN_TEST(test_pop);
	RUN_TEST(test_top);
	RUN_TEST(test_empty);
	return UNITY_END();
}
