# Makefile
# 
# Objetivo: Compilar e rodar o exemplo de uso das cores no Unity.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves 14/07/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

CC = gcc
TEST = teste.x

all:	$(TEST)

%.x:	%.c
	$(CC) $< -o $@
	./$@

clean:
	rm *.x

help:
	@echo "Para compilar e rodar este exemplo utilize o comando 'make'"
