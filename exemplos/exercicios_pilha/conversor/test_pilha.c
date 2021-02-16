#include "Unity/unity.h"
#include "pilha.h"

PILHA p;

void setUp(){
	if(p!=NULL)
		free(p);
	init(&p);
};

void tearDown(){
	//print(p);
};

void test_init(){
	TEST_MESSAGE("init");
	TEST_ASSERT_NULL(p);
}

void test_push(){

	TEST_MESSAGE("push");
	push(&p,2);
	TEST_ASSERT_FALSE(empty(p));
	push(&p,3);
	push(&p,4);
	TEST_ASSERT_FALSE(empty(p));
}

void test_pop(){

	TEST_MESSAGE("pop");
	push(&p,7);
	push(&p,8);
	pop(&p);
	TEST_ASSERT_EQUAL(7,top(p));
}

void test_top(){

	TEST_MESSAGE("top");
	push(&p,5);
	TEST_ASSERT_EQUAL(5,top(p));
	push(&p,3);
	TEST_ASSERT_EQUAL(3,top(p));
}

void test_empty(){
	TEST_MESSAGE("empty");
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
