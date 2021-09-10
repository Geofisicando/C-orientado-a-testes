# Makefile
# 
# Objetivo: Compilar e rodar os testes unitários da fila.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves (Dirack) 09/09/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

CC=gcc
TEST=test_fila.x

all:	$(TEST)

test_%.x:	test_%.c
	$(CC) $^ Unity/unity.c -o $@
	./$@
	rm $@
clean:
	rm *.x

help:
	@echo "Para compilar e rodar os teste utilize 'make'"

