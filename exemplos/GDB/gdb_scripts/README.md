# Aula 38 - Depuração automatizada com GDB scripts

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a executar comandos do Shell, executar um Makefile  chamando 'make' e a chamar funções definidas no código fonte com o comando call, ambos no terminal do GDB. A seguir, um resumo das principais opções dos comandos:

* **shell ls:** Executar o comando ls do shell a partir do console do GDB.

* **make:** Executar Makefile na pasta atual a partir do console do GDB.

* **call soma(1,1):** Chamar a função soma a partir do terminal do GDB. Esta função é definida no código fonte e a chamada é realizada passando parâmetros à função.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
