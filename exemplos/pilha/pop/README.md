# Aula 13 - Função Pop (remover elemento do topo da pilha, desempilhar)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula implementamos a função pop para retirar um elemento da pilha a partir do topo (desempilhar). A lógica de funcionamento da função
pop é simples: Primeiro armazena a referência para o ponteiro da pilha em um ponteiro temporário **tmp**.
Daí verifica se a pilha está vazia utilizando a função empty, se a pilha estiver vazia não há nada para desempilhar, então retorna.
Se a pilha tiver elementos, basta deslocar o ponteiro da pilha **p** para o próximo elemento **p->prox** e liberar o elemento do topo.

```c
void pop(PILHA* p){

	NO* tmp = *p;
	if(empty(*p))return;
	*p = (*p)->prox;
	free(tmp);
}
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```
