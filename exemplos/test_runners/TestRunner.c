#include "unity_fixture.h"

TEST_GROUP_RUNNER(Grupo1)
{
    RUN_TEST_CASE(Grupo1, random1);
    RUN_TEST_CASE(Grupo1, random2);
}

TEST_GROUP_RUNNER(Grupo2){
	RUN_TEST_CASE(Grupo2, random1);
}
