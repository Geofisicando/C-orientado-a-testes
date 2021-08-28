# Makefile
# 
# Objetivo: Compilar o sistema e rodar os testes da pilha.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves (Dirack) 28/08/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

CC = gcc
TEST = test_pilha.x
UNITY = Unity/unity.c

all:	$(TEST) sistema.x

sistema.x:	sistema.c
	$(CC) $< -o $@ -g

test_%.x:	test_%.c
	$(CC) $< $(UNITY) -o $@
	./$@
	rm $@

expect:	teste.exp
	expect ./$<

help:
	@echo "Rodar 'make' para realizar os testes da pilha e compilar o sistema"
	@echo "O arquivo sistema.x é compilado já com a lista de símbolos do GDB"
	@echo "Rodar 'make expect' para realizar o teste da interface com o expect"

clean:
	rm *.x
