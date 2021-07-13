# Aula 11 - Função push (empilhar elemento na Pilha)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula aprendemos como inserir elementos na pilha implementando a função push (empilhar). Em uma pilha, os elementos são inseridos no topo (empilhar)
e retirados do topo (desempilhar). Esta operação consiste em manipular o ponteiro da pilha que aponta para o topo da pilha.

A lógica de funcionamento desta função é um pouco mais complexa, pois envolve a manipulação de ponteiros.
Primeiro declaramos um novo ponteiro para um nó da nossa pilha que será o elemento a ser empilhado no topo da pilha.
Este ponteiro recebe um novo nó alocado com malloc, como a seguir:

```c
NO* tmp;
tmp = (NO*) malloc(sizeof(NO));
```

Para o caso de malloc não conseguir alocar memória suficiente e retornar NULL, utilizamos a seguinte condicional:

```c
if(tmp==NULL) return;
```

Daí inicializamos o novo nó da pilha com o número inteiro passado à função push.

```c
tmp->n = num;
```

Basta agora deslocar o ponteiro do novo nó para apontar para o topo da pilha e fazer com que o novo nó passe a ser o
novo topo da pilha no ponteiro **p**:

```c
tmp->prox = *p;
*p=tmp;
```

A função completa ficará assim:

```c
void push(PILHA* p, int num){
	NO* tmp;
	tmp = (NO*) malloc(sizeof(NO));
	if(tmp==NULL) return;
	tmp->n = num;
	tmp->prox = *p;
	*p=tmp;
}
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o comando a seguir:

```sh
make
```
