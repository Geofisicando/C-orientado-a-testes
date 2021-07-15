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

all:	sinais.x monitor.x
	# Executar o programa sinais em outro terminal
	gnome-terminal --geometry=20x10+1000+0 -- bash -c "exec ./sinais.x"
	# Obter o PID do programa sinais e guardar em arquivo txt
	pidof sinais.x > tmpsinais.txt
	# O programa monitor executa lendo o PID a partir do arquivo
	./monitor.x < tmpsinais.txt

%.x:	%.c
	gcc $< -o $@

clean:
	rm *.x tmpsinais.txt
help:
	@echo "Para compilar e rodar o exemplo utilize o comando 'make'"
