#include "unity_fixture.h"

static void runAllTests(void)
{
  RUN_TEST_GROUP(Grupo1);
  RUN_TEST_GROUP(Grupo2);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, runAllTests);
}
