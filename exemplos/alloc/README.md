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

# Aula 61 - Função de alocação dinâmica personalizada de strings em c

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar a função de alocação dinâmica personalizada charalloc, criada na aula anterior. A utilização de vetores de char (strings)
em C é um pouco mais complicada que a utilização de vetores de int e float. Para inicializar a string em C iremos utilizar a função memcpy definida na
bilbioteca 'string.h'. Primeiro faremos a alocação dinâmica da string com charalloc:

```c
char *string
string = charalloc(20);
```

Assim, após a alocação dinâmica da string, nós copiamos o nome "Dirack" para a string utilizando memcpy e nos asseguramos que após o nome
copiado a string contenha o '\0':

```c
memcpy(string,"Dirack",6);
string[6]='\0';
```

Daí podemos utilizar a string na função printf:

```c
printf("Olá, meu nome é %s\n",string);
```

# Aula 62 - Alocação dinâmica de vetores de structs em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a criar uma função de alocação dinâmica personalizada para uma estrutura (struct). Utilizamos esta função para gerar
um vetor de estruturas PESSOA, com nome, idade e cpf. A utilização da função de alocaçáo dinâmica do vetor de estruturas, pessoaalloc, é baseada
na mesma lógica de funcionamento das demais funções de alocação dinâmica personalizada produzidas nas aulas anteriores. Basta utilizar:

```c
PESSOA *p;
p = pessoaalloc(3);
```

Onde p é um vetor de 3 pessoas.

# Aula 63 - Inicialização de vetores de structs em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```

O programa 'main.x' será gerado já com a lista de símbolos do GDB, e você poderá carregar o programa no GDB utilizando o seguinte comando:

```sh
gdb main.x
```

Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação
(com a flag -g para gerar a lista de símbolos do GDB):

```sh
gcc -g main.c -o main.x
```
