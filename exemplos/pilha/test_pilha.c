#include "Unity/unity.h"
#include "pilha.h"

PILHA p;

void setUp(){
	init(&p);
};

void tearDown(){};

void test_init(){
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
