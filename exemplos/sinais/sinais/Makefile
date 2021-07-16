# Makefile
# 
# Objetivo: Compilar e rodar o exemplo de uso.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves 15/07/2021
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

all:	sinais.x
	# Executar o programa sinais em outro terminal
	gnome-terminal --geometry=20x10+1000+0 -- bash -c "exec ./sinais.x"
	# Obter o PID do programa sinais, guardar em uma variável
	# E enviar os sinais com o comando kill
	VARSINAIS=$$(pidof sinais.x) && sleep 4 && kill -2 $$VARSINAIS && sleep 4 && kill -15 $$VARSINAIS

%.x:	%.c
	gcc $< -o $@

clean:
	rm *.x
help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"
