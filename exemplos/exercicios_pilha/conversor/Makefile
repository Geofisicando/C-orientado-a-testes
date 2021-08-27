# Makefile
# 
# Objetivo: Compilar e rodar os testes da pilha, compilar e rodar o conversor.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves (Dirack) 27/08/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

CC = gcc
TEST = test_pilha.x
UNITY = Unity/unity.c

all:	$(TEST) conversor.x run

conversor.x:	conversor.c
	gcc $< -o $@

run:
	@echo "Testar o conversor passando o número 30"
	echo 30 | ./conversor.x

test_%.x:	test_%.c
	$(CC) $< $(UNITY) -o $@
	./$@
	rm $@

help:
	@echo "Para compilar e rodar os testes da pilha, compilar e rodar o conversor use 'make'"

clean:
	rm *.x

