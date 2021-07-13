/*
* test_hipotenusa.c (C)
* 
* Objetivo: Suíte de teste da função hipotenusa refatorada.
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
#include "funcao_hipotenusa.h"

void setUp(){};

void tearDown(){};

void test_retorno_funcao_hipotenusa_para_trio_pitagorico(){
/*< Testa valores que formam um trio pitagórico, exemplo (3,4,5) >*/

	TEST_ASSERT_FLOAT_WITHIN(0.01,5.0,hipotenusa(3.0,4.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,13.0,hipotenusa(5.0,12.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,25.0,hipotenusa(7.0,24.0));
}

void test_retorno_funcao_hipotenusa_para_cateto_igual_0(){
/*< A função hipotenusa retorna 0 se um dos catetos for 0 >*/

	TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,hipotenusa(3.0,0.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,hipotenusa(0.0,4.0));
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_retorno_funcao_hipotenusa_para_trio_pitagorico);
	RUN_TEST(test_retorno_funcao_hipotenusa_para_cateto_igual_0);
	return UNITY_END();
}

