# Aula 71 - Como criar bibliotecas estáticas e dinâmicas em C (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

## Oque são as bibliotecas dinâmicas?

É uma biblioteca carregada dinâmicamente (no momento da execução). Não precisa que o código seja copiado, é feito apenas fazendo uma referência à biblioteca no binário executável. A linkagem ocorre quando o programa é executado, quando o binário executável e a biblioteca estão carregados na memória.

## Vantagens

1. Apenas uma única cópia da biblioteca é carregada na memória quando o programa é executado, assim muita memória é economizada quando vários programas usam esta mesma biblioteca

2. Se uma atualização é feita o programa que utiliza a bilbioteca não precisa ser recompilado, como no caso de bibliotecas estáticas. A manutenção é facilitada

## Desvantagens

1. Necessita de mais tempo para carregar, pois a linkagem é feita durante a execução ao invés de durante a compialação

2. O usuário precisa da biblioteca e do programa principal

## Como criar uma biblioteca dinâmica?

A compilação das bibliotecas de funções é feita com a opção -fPIC. Esta opção é utilizada para fazer um position independent code (PIC), ou
código independente de posição em tradução livre para o português, que é um requisito para bibliotecas dinâmicas.
Para realizar a compilação utilize o comando a seguir:

```sh
gcc -c -fPIC *.c -o libTest.o
```

Após a compilação dos códigos fonte, vem a produção da biblioteca
dinâmica com o seguinte comando:

```sh
gcc -shared -o libTest.so libTest.o
```

O programa principal pode ser montado com o seguinte comando de compilação:

```sh
gcc main.c libTest.so -o main.x
```

A biblioteca dinâmica precisará ser encontrada pelo linker, para fazê-lo
existem duas possibilidades:

1. a primeira possibilidade é configurar a variável LD\_LIBRARY\_PATH
com o endereço da pasta onde está a biblioteca dinâmica:

```sh
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:~/my_path/
```

2. A segunda possibilidade é mover a biblioteca para '/usr/local/lib' e
configurar o cache com o comando ldconfig:

```sh
ldconfig /usr/local/lib
```

Para visualizar as bibliotecas utilizadas por um programa utilize o comando ldd:

```sh
ldd main.x
```

### Referências
* [Everything you need to know about libraries in c](https://medium.com/@meghamohan/everything-you-need-to-know-about-libraries-in-c-e8ad6138cbb4)
