all:	main.x

main.x:	main.c matriz.c matriz.h
	gcc main.c matriz.c -o main.x
	./main.x

test:	test_matriz.x

test_matriz.x:	test_matriz.c Unity/unity.c matriz.c
	gcc test_matriz.c matriz.c Unity/unity.c -o test_matriz.x
	./test_matriz.x
