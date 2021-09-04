# Aula 58 - Como fazer a depuração de vetores no GDB? Alocação estática e dinâmica

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a visualizar vetores no GDB alocados com alocação estática e dinâmica. Para visualizar os elementos
de um vetor no GDB basta utilizar o comando print, ou sua versão abreviada p, como a seguir:

```
(gdb) p v
$1 = {1,2,3,4,5}
```

Esse vetor foi inicializado como segue (alocação estática):

```c
int v[5] = {1,2,3,4,5};
```

Para exibir um elemento do vetor basta utilizar:

```
(gdb) print v[1]
```

O comando print também pode ser utilizado para atribuir um valor a um elemento do vetor. Como a seguir:

```
(gdb) print v[1] = 10
```

Agora, para exibir um vetor alocado dinamicamente teremos de utilizar ponteiros. Um ponteiro aponta para
o primeiro elemento de um vetor. Alocamos o vetor de 5 inteiros a seguir:

```c
int *v;
v = (int*) malloc(5*sizeof(int));
```

Utilizamos o @ para exibir os primeiros cinco elementos a partir de \*v:

```
(gdb) p *v@5
```

Outra forma de executar este comando a seguir:

```
(gdb) p v[0]@5
```

Cada elemento pode ser acessado e modificado utilizando o comando print da mesma forma que os vetores alocados estaticamente.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```