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

PILHA p;

void setUp(){

	init(&p);
};

void tearDown(){};

void test_init(){
	TEST_MESSAGE("init");
	TEST_ASSERT_NULL(p);
}

void test_push(){

	TEST_MESSAGE("push");
	push(&p,2);
	TEST_ASSERT_FALSE(empty(p));
	push(&p,3);
	push(&p,4);
	TEST_ASSERT_FALSE(empty(p));
}

void test_pop(){
	TEST_IGNORE_MESSAGE("Not implemented!");
}

void test_top(){
	TEST_IGNORE_MESSAGE("Not implemented!");
}

void test_empty(){
	TEST_MESSAGE("empty");
	TEST_ASSERT(empty(p));
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
