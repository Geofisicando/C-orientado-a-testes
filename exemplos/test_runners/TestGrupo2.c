#include "unity_fixture.h"

TEST_GROUP(Grupo2);

TEST_SETUP(Grupo2){}

TEST_TEAR_DOWN(Grupo2){}

TEST(Grupo2,random1)
{
  TEST_MESSAGE("Eu sou grupo 2!");
}

TEST(Grupo2,random2)
{
    TEST_ASSERT_EQUAL(1,1);
}
