#include "Unity/unity.h"
#include "pilha.h"

void setUp(){};

void tearDown(){};

void test_init(){
	PILHA p;
	init(&p);
	TEST_ASSERT_NULL(p);
}

void test_push(){

	TEST_IGNORE_MESSAGE("Not implemented");
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
