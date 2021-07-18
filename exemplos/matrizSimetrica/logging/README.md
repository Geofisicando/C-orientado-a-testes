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

## Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
