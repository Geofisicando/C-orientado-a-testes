# Makefile
# 
# Objetivo: Compilar e rodar a suíte de testes do exemplo
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves 13/07/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

CC = gcc
TEST = test_pilha.x
UNITY = Unity/unity.c

all:	$(TEST)

test_%.x:	test_%.c
	$(CC) $< $(UNITY) -o $@
	./$@
	rm $@
clean:
	rm *.x

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"
