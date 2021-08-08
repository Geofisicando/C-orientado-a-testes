# Aula 29 - Comandos básicos do GDB: run, start, next, print e break

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar os comandos básicos do GDB para realizar a depuração do código fonte escrito em linguagem C. A seguir tem um resumo dos principais comandos desta aula:

* **run:** Executar o código do início ao fim ou até um ponto de parada (breakpoint).

* **start:** Executar o código fonte do início colocando um ponto de parada (breakpoint) no início da função main.

* **next:** Executar a próxima linha do código.

* **print:** Imprimir ou setar valor de variável. Exemplo, para imprimir valor da variável f1 e depois setar o valor de f2 igual a 10:

```
print f1
print f2=10
```

* **break:** Criar ponto de parada (breakpoint). Exemplo, criar ponto de parada na linha 12:

```
break 12
```

* **quit:** Sair do GDB.

O GDB permite abreviar os comandos print (p), break (b), next (n) e continue (c), para simplificar a digitação dos comandos e se o usuário apertar a tecla ENTER sem ter especificado nenhum comando no console do GDB, o GDB, por padrão, irá executar o último comando executado anteriormente.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
