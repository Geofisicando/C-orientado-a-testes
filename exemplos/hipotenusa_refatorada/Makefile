# Makefile
# 
# Objetivo: Compilar e rodar o exemplo de refatoração da função hipotenusa.
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

all:	test_hipotenusa.x

test_hipotenusa.x:	test_hipotenusa.c
	gcc test_hipotenusa.c Unity/unity.c -o test_hipotenusa.x -lm
	./test_hipotenusa.x
	rm test_hipotenusa.x

clean:
	rm *.x

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"
