# Aula 40 - Como corrigir erros de segmentação e monitorar ponteiros no GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar o GDB para tratar erros de segmentação. Os erros de segmentação ocorrem quando o programa tenta acessar
um endereço de memória que não está disponível para ele, então o kernel lança um sinal SIGSEGV para o programa encerrar a execução.

O programa de exemplo, 'main.c', ocasiona um erro de segmentação
quando executado, pois não foi atribuído um endereço
de memória válido ao ponteiro **pi**. Este erro pode ser
corrigido dentro do próprio GDB, realizando a alocação
dinâmica do ponteiro com malloc antes da execução 
do comando abaixo:

```c
*pi = 5;
```

Para isso, o seguinte comando é executado no terminal
do GDB para atribuir um endereço de memória válido à pi:

```
(gdb) print pi = (int*) malloc(sizeof(int))
```

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
