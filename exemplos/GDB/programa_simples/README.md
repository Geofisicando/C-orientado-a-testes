# Aula 30 - Depurar um programa passo a passo com breakpoints do GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)


#### Programa simples para estudar os comandos do GDB

Para instalar o GDB utilize o comando:

```sh
~$ sudo apt install gdb
```

A compilação deste programa deverá ser feita com a opção '-g'
do compilador gcc para gerar a lista de símbolos a ser lida
pelo GDB. Exemplo:

```sh
~$ gcc -g main.c -o main.x
```

#### Utilizar o GDB script e gerar logging

Utilize o script do GDB, 'gdb\_script', para executar os
comandos do gdb automaticamente e gerar o arquivo de logging.
Basta rodar o seguinte comando no terminal:

```sh
~$ gdb -x gdb_script main.x -q
```

Os comandos do script gdb\_script serão executados e o
arquivo de logging 'file.txt' será gerado.
