#include "Unity/unity.h"
#include "_alloc.h"

void setUp(){};

void tearDown(){};

void test_ponteiro(){
	int *i;
	int x=5;

	i = &x;

	printf("%p %p\n",i,&x);

	TEST_ASSERT_EQUAL_PTR(i,&x);
}

void test_array_int(){

	int *i;
	int *j;

	i = intalloc(2); i[0]=1; i[1]=1;
	j = intalloc(2); j[0]=1; j[1]=1;

	TEST_ASSERT_EQUAL_INT_ARRAY(i,j,2);	
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_ponteiro);
	RUN_TEST(test_array_int);
	return UNITY_END();
}

