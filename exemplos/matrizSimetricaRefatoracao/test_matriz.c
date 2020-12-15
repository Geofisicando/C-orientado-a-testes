#include "Unity/unity.h"
#include "matriz.h"

void setUp(){};

void tearDown(){};

void test_matriz_simetrica_2_por_2(){
/* A matriz utilizada será:
 *
 * 	1 2 
 * 	2 1 
 */

	int i;

	MatrizSimetrica* mp = cria(2);

	atribui(mp,0,0,1.0);
	atribui(mp,0,1,2.0);
	atribui(mp,1,0,2.0);
	atribui(mp,1,1,1.0);

	for(i=0;i<3;i++)
		printf("%f\n",mp->vetor[i]);

	TEST_ASSERT_FLOAT_WITHIN(0.01,1.0,acessa(mp,0,0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,2.0,acessa(mp,0,1));
	TEST_ASSERT_FLOAT_WITHIN(0.01,2.0,acessa(mp,1,0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,1.0,acessa(mp,1,1));

	libera(mp);
};

void test_matriz_simetrica_3_por_3(){
/* A matriz utilizada será:
 *
 * 	1 2 3
 * 	2 1 2
 * 	3 2 1
 */
	int i;
	MatrizSimetrica* mp = cria(3);

	atribui(mp,0,0,1.0);
	atribui(mp,0,1,2.0);
	atribui(mp,0,2,3.0);
	atribui(mp,1,1,1.0);
	atribui(mp,1,2,2.0);
	atribui(mp,2,2,1.0);

	/* Teste elementos diagonal principal */
	for(i=0;i<3;i++)
		TEST_ASSERT_FLOAT_WITHIN(0.01,1.0,acessa(mp,i,i));

	/* Teste elementos acima da diagonal principal */
	TEST_ASSERT_FLOAT_WITHIN(0.01,2.0,acessa(mp,0,1));
	TEST_ASSERT_FLOAT_WITHIN(0.01,3.0,acessa(mp,0,2));
	TEST_ASSERT_FLOAT_WITHIN(0.01,2.0,acessa(mp,1,2));

	/* Teste elementos abaixo da diagonal principal */
	TEST_ASSERT_FLOAT_WITHIN(0.01,2.0,acessa(mp,1,0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,3.0,acessa(mp,2,0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,2.0,acessa(mp,2,1));

};

int main(){
	UNITY_BEGIN();
	RUN_TEST(test_matriz_simetrica_2_por_2);
	RUN_TEST(test_matriz_simetrica_3_por_3);
	return UNITY_END();
}
