/*
* test_exemplo.c (C)
* 
* Objetivo: Exemplo de teste unitário de vetor de estrutura com o Unity
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

void test_struct_pessoa(){
/*< Verificar a inicialização da estrutura >*/
	PESSOA *amigos;
	amigos = pessoaalloc(2);
	pessoa_init(amigos,"Dirack",29,90999);
	pessoa_init(amigos+1,"Fulano",35,80888);

	TEST_ASSERT_EQUAL_STRING("Dirack",amigos[0].nome);
	TEST_ASSERT_EQUAL(29,amigos[0].idade);
	TEST_ASSERT_EQUAL(90999,amigos[0].cpf);

	TEST_ASSERT_EQUAL_STRING("Fulano",amigos[1].nome);
	TEST_ASSERT_EQUAL(35,amigos[1].idade);
	TEST_ASSERT_EQUAL(80888,amigos[1].cpf);
	
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_struct_pessoa);
	return UNITY_END();
}
