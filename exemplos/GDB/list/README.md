# Aula 34 - Exibir o código fonte no terminal do GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar o comando list no GDB para exibir o código fonte durante a depuração. A seguir, um resumo das principais opções do
comando list:

* **list:** Exibe o n linhas do código fonte no contexto da linha atual (n é definido em listsize). A versão abreviada deste comando é **l**.

* **list 5:** Exibir n linhas no contexto da linha 5.

* **list soma:** Exibir n linhas do código fonte da função soma.

* **list 3,5:** Exibir da linha 3 a 5.

* **list 3,:** Exibir n linhas a partir da linha 3.

* **list ,12:** Exibir n linhas até a linha 12.

Para configurar o número de linhas que o list exibe por padrão, utilize os comandos a seguir:

* **show listsize:** Mostrar quantas linhas o list exibe por padrão.

* **set listsize 5:** Configurar o número de linhas que o list exibe por padrão para 5 linhas.

* **set listsize unlimited:** Configurar o número de linhas que o list exibe por padrão para sem limites de linhas (o list irá exibir até o final do arquivo).

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
