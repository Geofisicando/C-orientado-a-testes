# Aula 59 - Criar uma função de alocação dinâmica personalizada em c (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós criamos uma função de alocação dinâmica personalizada em linguagem C. Primeiro, aprendemos a utilizar um novo tipo de variável
**size_t**:

> O tipo size_t armazena o tamanho de qualquer tipo de objeto, em bytes. É um apelido para um tipo inteiro que aceita apenas valores positivos (unsigned). É o tipo retornado pelo operador sizeof

O funcionamento da função alloc é bastante simples, passamos dois parâmetros, um inteiro multiplicador e o tamanho em bytes do tipo, utilizando o operador
sizeof. Assim, para alocar um vetor de 5 inteiros, basta utilizar:

```c
int *vetor;
vetor = (int) alloc(5,sizeof(int));
```

# Aula 60 - Criar uma função de alocação dinâmica personalizada em c (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós utilizamos a função de alocação dinâmica personalizada, alloc, criada na aula anterior, para criar uma função de alocação dinâmica de
vetores de inteiros. A função intalloc é bastante simples de utilizar, para alocar um vetor de 5 inteiros basta utilizar:

```c
int *vetor;
vetor = intalloc(5);
```

A função já irá retornar um (int*) com o espaço de memória requisitado. Assim, a alocação dinâmica de vetores de inteiros fica bem mais simples.

Da mesma forma, criamos funções semelhantes para a allocação dinâmica de vetores de float e char. Basta utilizar como no exemplo:

```c
float *vetorfloat;
vetorfloat = floatalloc(5);

char *string;
string = charalloc(10);
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```

O programa 'main.x' já será gerado com a lista de símbolos do GDB e você poderá carregar o programa no GDB utilizando o seguinte comando:

```sh
gdb main.x
```

Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação
(com a flag -g para gerar a lista de símbolos do GDB):

```sh
gcc -g main.c -o main.x
```
