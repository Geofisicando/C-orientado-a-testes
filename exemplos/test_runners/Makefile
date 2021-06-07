all:	main.x

main.x:	main.c
	gcc main.c TestRunner.c TestGrupo1.c TestGrupo2.c Unity/unity.c extras/memory/src/unity_memory.c extras/fixture/src/unity_fixture.c -Iextras/fixture/src -Iextras/memory/src -IUnity -o main.x
	./main.x

.PHONY:	main.x
