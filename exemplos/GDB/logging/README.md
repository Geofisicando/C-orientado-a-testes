# Aula 39 - Gerar arquivos de logging no GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a configurar e automatizar o logging com o GDB. A seguir, um resumo das principais opções dos comandos vistos na aula:

* **show logging:** Exibir as configurações de logging do GDB.

* **set logging file file.txt:** Definir o arquivo 'file.txt' como o nome do arquivo de logging. Por padrão o GDB utiliza o nome 'gdb.txt'.

* **set logging on:** Iniciar o logging com o GDB.

* **set logging off:** Encerrar o logging com o GDB.

* **echo mensagem\n:** Exibir mensagem na tela do terminal do GDB ('\n' é para colocar a quebra de linha após a mensagem).

* **set logging overwrite:** Habilitar a opção para sobreescrever o arquivo de logging anterior.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```

Você também poderá utilizar o arquivo 'gdb_script' para carregar e rodar automaticamente os comandos de logging. Este arquivo é um script do GDB
(veja a [Aula 38](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/gdb_scripts#aula-38---depura%C3%A7%C3%A3o-automatizada-com-gdb-scripts)) que automatiza a execução de comandos com o GDB. Após a compilação de 'main.x', basta rodar o comando a seguir:

```sh
gdb -x gdb_script main.x
```

O arquivo de logging 'file.txt' será gerado automaticamente.
