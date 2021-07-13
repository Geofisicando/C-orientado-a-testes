# Aula 12 - Função Top (verificar elemento no topo da Pilha)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos a função top para obter o elemento do topo da pilha. A lógica de implementação da função é
feita em apenas duas linhas: Primeiro verifica se a pilha está vazia, e se sim retorna -1 indicando que a pilha está vazia.
Se a pilha não está vazia, retorna o elemento do topo da pilha **p->n**.

```c
int top(PILHA p){
	if(empty(p)) return -1;
	return p->n;
}
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta rodar o seguinte comando:

```sh
make
```
