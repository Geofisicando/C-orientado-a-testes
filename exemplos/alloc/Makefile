# Makefile
# 
# Objetivo: Compilar e rodar o exemplo de uso da função
# de alocação dinâmica personalizada.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves 29/08/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

all:	main.x

main.x:	main.c _alloc.h
	gcc $< -o $@ -g
	./$@

help:
	@echo "Para compilar e rodar o exemplo use 'make'"

clean:
	rm *.x
