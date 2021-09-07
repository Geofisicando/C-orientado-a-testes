# Aula 52 - Implementar uma estrutura de dados fila em C, função inserir (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós iniciamos a implementação da função 'inserir' para inserir pessoas na nossa estrutura de dados fila. A lógica de inserção de novas pessoas
na fila é diferente da lógica de implementação da estrutura de dados pilha nas [Aulas 8-14](https://github.com/Geofisicando/C-orientado-a-testes#desenvolvimento-de-uma-pilha-com-tdd), pois inserimos elementos no topo da pilha utilizando o ponteiro da pilha para inserir os novos elementos. No caso da fila, iremos inserir
no final da fila, por isso percoremos toda a fila até chegar ao final, fazemos isto utilizando recursão:

> Recursão: Em programação, a recursividade é um mecanismo útil e poderoso que permite a uma função chamar a si mesma direta ou indiretamente, ou seja, uma função é dita recursiva se ela contém pelo menos uma chamada explícita ou implícita a si própria.

Por isso a função inserir tem o seguinte bloco if para verificar se estamos no final da fila. Caso não, a função chama
a si mesma dentro do else passando o ponteiro para o próximo elemento da fila, e assim por diante até chegar ao final da fila
(No final da fila, a última pessoa aponta para NULL).

```c
if(*f==NULL){
  // inserir novo elemento
}else{
  inserir(&(**f).prox,idade,nome);
}
```

# Aula 53 - Implementar uma estrutura de dados fila em C, função inserir (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)
