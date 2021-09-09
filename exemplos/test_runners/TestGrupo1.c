#include "unity_fixture.h"

TEST_GROUP(Grupo1);

TEST_SETUP(Grupo1){}

TEST_TEAR_DOWN(Grupo1){}

TEST(Grupo1,random1)
{
  TEST_ASSERT_EQUAL(0, 0);
  TEST_MESSAGE("Eu sou grupo 1!");
}

TEST(Grupo1,random2)
{
    TEST_ASSERT_EQUAL(1,1);
}
