# Aula 39 - Gerar arquivos de logging no GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar os scripts do GDB para automatizar a depuração de programas escritos em linguagem C com o GDB. A seguir, um resumo das principais opções dos comandos vistos na aula:

* **gdb main.x -q:** Ao digitar este comando no terminal do Shell, este irá carregar o programa 'main.x' no GDB e iniciar a depuração no GDB sem exibir a mensagem inicial (flag -q).

* **source gdb_script:** Ao digitar este comando no console do GDB, ele irá carregar os comandos do arquivo gdb_script no GDB.

* **gdb --command=gdb_script main.x:** Ao digitar este comando no terminal do Shell, este irá carregar o programa 'main.x' no GDB e iniciar a depuração.

* **gdb -x gdb_script main.x:** Faz o mesmo que o comando anterior.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
