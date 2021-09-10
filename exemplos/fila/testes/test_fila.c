/*
* test_fila.c (C)
* 
* Objetivo: Implementação dos testes unitários da estrutura de dados fila.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 09/09/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include "Unity/unity.h"
#include "fila.h"

FILA f;

void setUp(){}

void tearDown(){}

void test_funcao_criar(void){
	TEST_MESSAGE("Criar");
	criar(&f);
	TEST_ASSERT_NULL(f);
}

void test_funcao_inserir(void){
	TEST_MESSAGE("inserir");
	TEST_ASSERT_NULL(f);
	inserir(&f,29,"Dirack");
	TEST_ASSERT_FALSE(f==NULL);	
}

void test_funcao_apagar(void){
	TEST_MESSAGE("Apagar");
	apagar(&f);
	TEST_ASSERT_NULL(f);
}

void test_fila(void){
	TEST_MESSAGE("Fila");
	inserir(&f,29,"Dirack");
        inserir(&f,44,"Fulano");
        inserir(&f,22,"Beltrano");
	TEST_ASSERT_EQUAL(f->idade,29);
	TEST_ASSERT_EQUAL_STRING(f->nome,"Dirack");
	apagar(&f);
	TEST_ASSERT_EQUAL(f->idade,44);
        TEST_ASSERT_EQUAL_STRING(f->nome,"Fulano");
	apagar(&f);
	TEST_ASSERT_EQUAL(f->idade,22);
        TEST_ASSERT_EQUAL_STRING(f->nome,"Beltrano");
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_funcao_criar);
	RUN_TEST(test_funcao_inserir);
	RUN_TEST(test_funcao_apagar);
	RUN_TEST(test_fila);
	return UNITY_END();
}
