#include "Unity/unity.h"
#include "pilha.h"
//#define IGNORE_PUSH

void setUp(){};

void tearDown(){};

void test_init(){
	TEST_MESSAGE("Message init pilha");
}

void test_push(){
	#ifdef IGNORE_PUSH
	TEST_IGNORE_MESSAGE("Not implemented");
	#endif

	TEST_MESSAGE("Not ignored");
}

void test_pop(){

	TEST_IGNORE_MESSAGE("Not implemented");
}

void test_top(){

	TEST_IGNORE_MESSAGE("Not implemented");
}

void test_empty(){

	TEST_IGNORE_MESSAGE("Not implemented");
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
