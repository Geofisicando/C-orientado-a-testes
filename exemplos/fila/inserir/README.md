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

Nesta aula nós finalizamos a implementação e os testes no GDB da função 'inserir' para inserir pessoas na estrutura de dados fila. A seguir, a lógica de
inserção da primeira pessoa na fila.

No início a fila está vazia. Nós inicializamos a fila com a função 'criar' (implementada na [Aula 51](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/intro#aula-51---como-implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-criar-fila))
fazendo o ponteiro da fila apontar para NULL (final da fila). Assim, o teste no bloco if da função inserir implementado na aula anterior
será satisfeito (\*f==NULL) e começaremos a inserir o novo elemento na fila. A seguir a representação esquemática do estado da fila antes de
inserirmos um elemento:

| FILA | Pessoas |
 | --- | --- |
 | :arrow_right: | NULL |
 
 Depois de inserir o elemento na fila, o ponteiro da fila passa a apontar para esta pessoa e o ponteiro da estrutura que contém os
 dados da pessoa aponta para o final da fila:
 
 | FILA | Pessoas |
 | --- | --- |
 | | NULL |
  | | :arrow_up: |
 | :arrow_right: | Pessoa 1 |

### Exemplo de uso

Você pode compilar o programa fila.c com 'make', e o binário fila.x será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g fila.c -o fila.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb fila.x
```
