# Makefile
# 
# Objetivo: Compilar e rodar testes e programa principal.
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

main.x:	main.c matriz.c matriz.h
	gcc main.c matriz.c -o main.x
	./main.x

test:	test_matriz.x

test_matriz.x:	test_matriz.c Unity/unity.c matriz.c
	gcc test_matriz.c matriz.c Unity/unity.c -o test_matriz.x
	./test_matriz.x

clean:
	rm *.x

help:
	@echo "Para compilar e rodar o teste utilize 'make test'"
	@echo "Para compilar e rodar o programa principal utilize 'make'"

.PHONY:	test_matriz.x
