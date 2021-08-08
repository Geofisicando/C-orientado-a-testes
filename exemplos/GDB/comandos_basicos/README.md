# Aula 29 - Comandos básicos do GDB: run, start, next, print e break

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar os comandos básicos do GDB para realizar a depuração do código fonte escrito em linguagem C. A seguir tem um resumo dos principais comandos desta aula:

* **run:** Executar o código do início ao fim ou até um ponto de parada (breakpoint).

* **start:** Executar o código fonte colocando um ponto de parada (breakpoint) no início da função main.

* **next:** Executar a próxima linha do código.

* **print:** Imprimir ou setar valor de variável.

* **Break:** Criar ponto de parada (breakpoint).

* **Quit:** Sair do GDB.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB. Se você desejar fazer a compilação manualmente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
