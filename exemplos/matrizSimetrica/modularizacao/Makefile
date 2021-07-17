# Makefile
# 
# Objetivo: Compilar e rodar o exemplo de uso.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves 17/07/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

all:	main.x
	./main.x

main.x:	main.c matriz.c
	gcc $^ -o $@

clean:
	rm *.x

help:
	@echo "Para compilar e rodar o exemplo utilize 'make'"
