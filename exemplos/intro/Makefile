# Makefile
# 
# Objetivo: Compilar e rodar o teste unitário de exemplo.
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

all:	test_exemplo.x
	./$<

%.x:	%.c Unity/unity.c
	gcc $^ -o $@

clean:
	rm *.x

help:
	@echo "Utilize o comando 'make' para rodar este exemplo"
