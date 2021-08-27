# Aula 14 - Função Print (exibir elementos da pilha no terminal)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós finalizamos a implementação de uma estrutura de dados pilha com TDD. Nesta etapa implementamos a função print para exibir os elementos da pilha.
A função print utiliza a estratégia da recursão, pois a função chama a si mesma passando o próximo elemento da pilha **p->prox**.

```c
void print(PILHA p){
	if(empty(p)) return;
	printf("%d \n",p->n);
	print(p->prox);
}
```

A lógica de funcionamento da função print também é bem simples. A função percorre e imprime os elementos da pilha do topo para a base, quando
chegar no último elemento este aponta para NULL e a função simplesmente retorna.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório com a implementação completa da pilha basta rodar o comando a seguir:

```sh
make
```
