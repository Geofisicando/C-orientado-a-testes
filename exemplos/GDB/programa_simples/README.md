# Aula 72 - Oque são as chamadas de sistema (syscalls) no Linux? Como criar processos

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)


Nesta aula nós aprendemos a utilizar os comandos básicos do GDB para criar e manipular pontos de parada (breakpoints). A seguir tem um resumo dos principais comandos desta aula:

* **break 12:** Criar um ponto de parada (breakpoint) na linha 12. A versão abreviada deste comando é **b 12**.

* **info breakpoints:** Listar os pontos de parada (breakpoints) disponíveis. A versão abreviada deste comando é **info b**.

* **disable 2:** Desabilitar o breakpoint 2.

* **enable 2:** Habilitar o breakpoint 2.

* **clear 18:** Apagar o breakpoint da linha 18.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
