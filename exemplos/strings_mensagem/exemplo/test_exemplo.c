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

void test_de_strings(){

	// Este teste irá passar, as strings são iguais
	TEST_ASSERT_EQUAL_STRING("hello","hello");

	// Este teste irá falhar, as string são diferentes
	TEST_ASSERT_EQUAL_STRING("hello","oi");
}

void test_com_mensagem_de_erro(){

	// Esta mensagem não será exibida, teste passou
	TEST_ASSERT_MESSAGE(2!=1,"Teste passou!");

	// Esta mensagem será exibida, teste falhou
	TEST_ASSERT_MESSAGE(2==1,"Teste falhou!");
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_de_strings);
	RUN_TEST(test_com_mensagem_de_erro);
	return UNITY_END();
}
