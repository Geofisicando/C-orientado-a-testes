# Aula 19 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 3)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)
[:tv: Assistir aula](https://youtu.be/QiM6Ih6WtQA)

Nesta aula nós demos continuidade a depuração do programa da matriz simétrica fazendo a análise da estrutura matriz simétrica e logging das funções
acessa e atribui. A estrutura MatrizSimetrica armazena os elementos da matriz em um vetor de floats **v**, a matriz simétrica é quadrada e de dimensão
**dim**.

```c
struct mat {
    int dim;
    float* v;
};
 
typedef struct mat MatrizSimetrica;
```

Para fazer o logging nas funções acessa e atribui e exibir os índices i, j e k nas funções utilizamos a função printf e a macro do pré processador
\_\_FUNCTION\_\_ que é substituída pelo nome da função no pré processamento. Assim, podemos saber qual função exibiu o logging na tela do terminal.

```c
printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,i,j,k);
```

## Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
