# Makefile: Compilação dos testes

all:	test_float.x

test_float.x:	test_float.c
	gcc test_float.c Unity/unity.c -o test_float.x
	./test_float.x
