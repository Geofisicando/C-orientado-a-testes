#!/bin/bash
#
# Makefile (Shell Script)
# 
# Objetivo: Compilar e rodar o exemplo da biblioteca dinâmica.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves 12/07/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.


all:	main.x
	LD_LIBRARY_PATH=$$PWD && ./main.x

main.x:	main.c liballoc.so
	gcc main.c liballoc.so -o main.x

liballoc.so:	_alloc.c _alloc.h
	gcc -c -fPIC _alloc.c -o liballoc.o # Compilar código fonte
	gcc -shared -o liballoc.so liballoc.o # Gerar biblioteca

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"

clean:
	rm *.o *.so *.x
