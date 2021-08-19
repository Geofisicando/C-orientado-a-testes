# Aula 32 - Exercício de depuração com o GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós revisamos os comandos do GDB aprendidos nas aulas anteriores por meio de um exercício de depuração passo a passo no GDB.

### Exercício

Este diretório contém o arquivo 'main.c' e a biblioteca de funções 'funcoes.h' com alguns bugs. Você deve utilizar os comandos do GDB para
executar o programa principal passo a passo, entrar nas funções soma e sub e localizar os bugs para depois corrigí-los.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
