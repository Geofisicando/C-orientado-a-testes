# Aula 10 - Função empty (verificar se a Pilha está vazia)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos a função empty e os testes para verificar se a pilha está vazia seguindo as práticas do TDD.
A lógica de implementação desta função é bem simples. Se a pilha estiver vazia, o ponteiro da pilha aponta para NULL. Assim,
basta verificar esta condição e retornar o resultado:

```c
int empty(PILHA p){
	return (p==NULL);
}
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta rodar o seguinte comando:

```sh
make
```
