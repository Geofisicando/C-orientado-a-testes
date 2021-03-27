CC=gcc
TEST=test_fila.x

all:	$(TEST)

test_%.x:	test_%.c
	$(CC) $^ Unity/unity.c -o $@
	./$@
