# Aula 75 - Como rodar um comando ou script do shell em um programa em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

A função system é a forma mais fácil de, a partir de um programa em C, se conseguir executar outro programa.
Esta função aceita como argumento um comando da shell, executa-o e devolve ao programa o valor retornado pelo comando executado.

Basicamente a função system faz um fork para criar um processo filho.
O processo filho usa a system call exec para correr uma shell, shell essa que interpreta o comando contido no argumento da função
system e executa-o.
Além disso a função system depois de lançar o processo filho executa a system call wait para esperar que a shell termine a execução do comando.
É através desta system call que tem acesso ao valor retornado pelo comando executado pela shell.

# Aula 76 - A função system e a chamada de sistema waitpid

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)
