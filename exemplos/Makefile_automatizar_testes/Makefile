# Makefile
# 
# Objetivo: Exemplo de automatização dos testes com Makefile.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves (Dirack) 22/10/2020
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

all:	test_example.x

test_example.x:	test_example.c
	gcc test_example.c Unity/unity.c -o test_example.x
	./test_example.x

clean:
	rm *.x

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"
