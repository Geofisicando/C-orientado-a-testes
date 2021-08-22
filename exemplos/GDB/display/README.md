# Aula 35 - Monitorar variáveis no GDB com o comando display

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar o comando display para visualizar e monitorar os valores das variáveis no GDB durante a depuração. A seguir, um resumo das principais opções do comando display:

* **display i:** Monitorar a variável i.

* **undisplay 1:** Desativar o display da primeira variável monitorada.

* **undisplay:** Desativar o display de todas as variáveis.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
