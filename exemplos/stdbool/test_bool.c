#include "Unity/unity.h"
#include "_bool.h"

void setUp(){};

void tearDown(){};

void test_bool(){
	TEST_ASSERT_TRUE(true);
	TEST_ASSERT_FALSE(false);
}

int main(){
	UNITY_BEGIN();
	RUN_TEST(test_bool);
	return UNITY_END();
}
