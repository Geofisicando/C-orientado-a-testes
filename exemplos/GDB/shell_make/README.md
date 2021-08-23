# Aula 37 - Chamar funções, executar comandos do Shell e Makefiles no GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar o comando backtrace para visualizar a pilha de funções e o comando frame para nos movimentarmos entre os frames no GDB durante a depuração. A seguir, um resumo das principais opções dos comandos:

* **info locals:** Exibir as variáveis no escopo da função.

* **backtrace:** Exibir a pilha de funções no GDB. A versão abreviada deste comando é **bt**.

* **frame 1:** Mover para o frame 1 da pilha de funções.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
