# Aula 11 - Função push (empilhar elemento na Pilha)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula aprendemos como inserir elementos na pilha implementando a função push (empilhar). Em uma pilha, os elementos são inseridos no topo (empilhar)
e retirados do topo (desempilhar). Esta operação consiste em manipular o ponteiro da pilha que aponta para o topo da pilha.

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
