# 71 - Como criar bibliotecas estáticas e dinâmicas em C (Parte 2)

Compilação das bibliotecas de funções com a opção -fPIC. A seguir uma
breve descrição do objetivo da flag:

```sh
gcc -c -fPIC *.c -o libTest.o
```

```
As you can see, the command is very similar to that of Static Library,
extra option here is -fPIC. This makes position independent code (PIC),
which is a requirement for dynamic library.
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

```
Since Dynamic Library is linked during runtime, we obviously need to
make this file available during runtime. The dynamic linker searches
standard paths available in the LD_LIBRARY_PATH.

Or move the library to /usr/local/lib because ‘/usr/local/lib’
is already a path specified in the ‘LD_LIBRARY_PATH’
environment variable. Now we need to run
ldconfig on the directory you moved it to.
```
Ou seja, a primeira possibilidade é configurar a variável LD\_LIBRARY\_PATH
com o endereço da pasta onde está a biblioteca dinâmica:

```sh
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:~/my_path/
```

A segunda possibilidade é mover a biblioteca para '/usr/local/lib' e
configurar o cache com o comando ldconfig:

```sh
ldconfig /usr/local/lib
```


Para visualizar as bibliotecas utilizadas por um programa utilize o comando
ldd:

```sh
ldd main.x
```

### Referências
* [Everything you need to know about libraries in c](https://medium.com/@meghamohan/everything-you-need-to-know-about-libraries-in-c-e8ad6138cbb4)
