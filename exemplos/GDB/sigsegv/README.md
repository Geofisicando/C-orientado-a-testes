#### Exemplo de depuração de error de segmentação com o GDB

O programa 'main.c' ocasiona um erro de segmentação
quando executado, pois não foi atribuído um endereço
de memória válido ao ponteiro pi. Este erro pode ser
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
