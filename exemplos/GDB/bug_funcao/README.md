# Aula 31 - Depuração de funções de bibliotecas em C com o comando step do GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar o comando step do GDB para "entrar" nas chamadas de função e fazer a depuração. O comando step funciona de modo
semelhante ao comando next quando não há uma chamada de função na linha a ser executada. Porém, quando executado o comando step em uma linha com
uma chamada de função, o comando entrará na chamada de função. A utilização do step é bem simples, basta digitar:

* **step:** Executar próxima linha ou entrar na chamada de função. A versão abreviada deste comando é **s**.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```

### Dividir a tela do terminal com o tmux

Você pode fazer este exercício utilizando múltiplas telas no terminal do shell com o tmux. Veja as aulas a seguir com os comandos básicos do tmux:

- Parte 1: https://www.youtube.com/watch?v=IEMEA7meAz4&list=PLLCFxfe9wkl862hiatJ_YmoTiL16y53eP&index=5
- Parte 2: https://www.youtube.com/watch?v=yZKt4Xb7Hz4&list=PLLCFxfe9wkl862hiatJ_YmoTiL16y53eP&index=7
- Parte 3: https://www.youtube.com/watch?v=aRJ4MxWtnMo&list=PLLCFxfe9wkl862hiatJ_YmoTiL16y53eP&index=8
