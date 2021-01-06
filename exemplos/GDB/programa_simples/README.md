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
