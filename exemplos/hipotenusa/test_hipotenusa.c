#include "Unity/unity.h"
#include "funcao_hipotenusa.h"

void setUp(){};

void tearDown(){};

void test_funcao_hipotenusa(){
	TEST_ASSERT_FLOAT_WITHIN(0.01,5.0,hipotenusa(3.0,4.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,13.0,hipotenusa(5.0,12.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,25.0,hipotenusa(7.0,24.0));
}

void test_valores_especiais(){
	TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,hipotenusa(3.0,0.0));
	TEST_ASSERT_FLOAT_WITHIN(0.01,0.0,hipotenusa(0.0,4.0));
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_funcao_hipotenusa);
	RUN_TEST(test_valores_especiais);
	return UNITY_END();
}

