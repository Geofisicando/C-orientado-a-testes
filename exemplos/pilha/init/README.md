# Aula 9 - Função init (inicialização da Pilha)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula iremos criar a estrutura de dados pilha e a função init que inicializa a pilha.
A estrutura de dados é uma pilha de inteiros em que cada nó possui um ponteiro que aponta para o próximo nó da pilha e o último
nó aponta para NULL (Final da pilha).

```c
struct sNo{
	int n;
	struct sNo* prox;
};
typedef struct sNo NO;
```

O ponteiro da pilha é um ponteiro para um nó e aponta para o topo da pilha.

```c
typedef NO* PILHA;
```

A pilha está inicialmente vazia. Assim, o ponteiro da pilha inicia apontando para NULL.

```c
void init(PILHA* p){
	*p = NULL;
}
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta rodar o seguinte comando:

```sh
make
```
