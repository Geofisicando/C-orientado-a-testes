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
	push(&p,2);
	TEST_ASSERT_FALSE(empty(p));
	push(&p,3);
	push(&p,4);
	TEST_ASSERT_FALSE(empty(p));
}

void test_pop(){

	TEST_IGNORE_MESSAGE("Not implemented");
}

void test_top(){

	push(&p,5);
	TEST_ASSERT_EQUAL(5,top(p));
	push(&p,3);
	TEST_ASSERT_EQUAL(3,top(p));
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
