# Makefile
# 
# Objetivo: Compilar e rodar o exemplo de uso.
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

all:	test_bool.x
	./$@

test_bool.x:	test_bool.c
	gcc test_bool.c Unity/unity.c -o test_unity.x

clean:
	rm *.x

help:
	@echo "Para compilar e rodar o exemplo utilizar 'make'"
