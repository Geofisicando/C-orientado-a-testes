# Aula 51 - Como implementar uma estrutura de dados fila em C, função criar fila

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós iniciamos a implementação da estrutura de dados fila criando a estrutura e a função de inicialização da fila, a função 'criar'.
Nós também visualizamos a inicialização da fila no GDB utilizando os comandos básicos do GDB aprendidos nas aulas anteriores.

A nossa estratégia de
implementação da fila simula a construção de testes para código legado (sem testes). Assim, iremos fazer a implementação do código primeiro
e utilizar o GDB para testar manualmente as funções e só depois faremos os testes unitários das funções no Unity framework. Observe que esta estratégia
é diferente do desenvolvimento orientado a testes (TDD) utilizado para a implementação da estrutura de dados pilha nas [Aulas 8-14](https://github.com/Geofisicando/C-orientado-a-testes#desenvolvimento-de-uma-pilha-com-tdd).

Primeiro implementamos a estrutura. A fila será composta por pessoas, cada pessoa terá uma idade e um nome. A estrutura de dados que representa
uma pessoa da fila terá os dados da pessoa e um ponteiro que aponta para a próxima pessoa da fila. Se a pessoa estiver no final da fila, o ponteiro
apontará para NULL, indicando o final da fila. A seguir a estrutura que representa uma pessoa na fila:

```c
typedef struct sPessoa{
	int idade;
	char nome[20+1];
	struct sPessoa *prox;
} PESSOA;
```

Então, definimos FILA como um ponteiro para a primeira pessoa da fila.

```c
typedef PESSOA *FILA;
```

Como a princípio não há ninguém na fila, iniciamos o ponteiro da fila como NULL na função que cria a fila.

```c
void criar(FILA* f){
	*f = NULL;
}
```

A seguir, uma representação esquemática do estado da fila após a inicialização com a função 'criar':

| FILA | Pessoas |
 | --- | --- |
 | :arrow_right: | NULL |

A seguir, uma representação esquemática do estado da fila após a inserção de algumas pessoas na fila. Observe que
cada pessoa aponta para a próxima pessoa da fila, à exceção da última que aponta para NULL. O ponteiro da fila aponta para a primeira pessoa
da fila:

| FILA | Pessoas |
 | --- | --- |
 | | NULL |
 | | :arrow_up: |
 | | Pessoa 4 |
 | | :arrow_up: |
 | | Pessoa 3 |
 | | :arrow_up: |
 | | Pessoa 2 |
 | | :arrow_up: |
 | :arrow_right: | Pessoa 1 |
