# Aula 64 - Utilizando variáveis durante a depuração com GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar as variáveis do GDB (convenience variables). Estas variáveis só existem para o GDB, não são parte do programa que
está sendo depurado e não tem efeito direto sobre este programa e sua execução. Estas variáveis aparecem com o prefixo '$' e podem ser inicializadas
com os comandos set e print.

```
(gdb) set $p = 1
```

Inicializa a variável $p com o valor 1. O mesmo exemplo, utilizando o comando print:

```
(gdb) print $p = 1
```

Estas variáveis também podem receber os retornos de funções do C ou de funções definidas nos seus programas e bibliotecas. Isto é feito com
o comando call como no exemplo a seguir:

```
(gdb) call $var = soma(2,2)
```

Irá chamar a função soma, definida no programa principal, passando os parâmetros 2 e 2. A função retorna um valor que será armazenado
na variável $var.

Da mesma forma, dá para utilizar a função malloc para fazer a alocação dinâmica e retornar o bloco de memória para uma variável do GDB.
Basta utilizar como no exemplo a seguir (Não precisa do ponto e vírgula no final do comando):


```
(gdb) call $vetor = (int*) malloc(sizeof(int))
```

Retorna um int* para a variável $vetor.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
