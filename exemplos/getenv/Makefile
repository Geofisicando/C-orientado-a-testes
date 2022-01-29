# Makefile
# 
# Objetivo: Compilar o exemplo de uso da função getenv.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves (Dirack) 29/01/2022
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

all: exemplo.x
	./$<

exemplo.x:	exemplo.c
	gcc -g $< -o $@

clean:
	rm *.x

help:
	@echo "Para compilar e rodar o exemplo de uso basta utilizar 'make'"
