# Aula 39 - Gerar arquivos de logging no GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a configurar e automatizar o logging com o GDB. A seguir, um resumo das principais opções dos comandos vistos na aula:

* **show logging:** Ao digitar este comando no terminal do Shell, este irá carregar o programa 'main.x' no GDB e iniciar a depuração no GDB sem exibir a mensagem inicial (flag -q).

* **set logging file file.txt:** Ao digitar este comando no console do GDB, ele irá carregar os comandos do arquivo gdb_script no GDB.

* **set logging on:** Ao digitar este comando no terminal do Shell, este irá carregar o programa 'main.x' no GDB e iniciar a depuração.

* **set logging off:** Faz o mesmo que o comando anterior.

* **echo mensagem\n:** Faz o mesmo que o comando anterior.

* **set logging overwrite:** Faz o mesmo que o comando anterior.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
