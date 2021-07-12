# Makefile
# 
# Objetivo: Compilar e rodar o exemplo da biblioteca estática.
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
	./main.x

main.x:	main.c liballoc.a
	gcc main.c liballoc.a -lalloc -o main.x

liballoc.a:	_alloc.c _alloc.h
	gcc -c _alloc.c # Compilar código fonte
	ar -rc liballoc.a _alloc.o # Gerar biblioteca
	ranlib liballoc.a # Organizar lista de símbolos

help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"

clean:
	rm *.o *.a *.x
