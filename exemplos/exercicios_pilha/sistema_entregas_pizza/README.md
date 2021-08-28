# Aula 44 - Exercício sistema de entrega de pizzas utilizando pilhas (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos a lógica do menu de sabores do nosso sistema de entrega de pizzas utilizando a estrutura de dados pilha. Nós construímos uma matriz
de sabores para armazenar o menu do sitema de entragas e associar o sabor a um número inteiro, este número será o índice do sabor na matriz, como a seguir:

```c
#define NUM_SABORES 4
#define MAX_STRING_SIZE 40

char sabores[NUM_SABORES][MAX_STRING_SIZE]={
"Portuguesa","4 queijos","Calabresa","Frango com catupiry"
};
```

A macro NUM_SABORES armazena o total de sabores do menu, cada sabor é uma string com no máximo MAX_STRING_SIZE caracteres. Assim, os sabores
podem ser recuperados a partir do índice na matriz sabores, exemplo:

```
sabores[0] = "Portuguesa"
sabores[1] = "4 queijos"
sabores[2] = "Calabresa"
sabores[3] = "Frango com catupiry"
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório, basta rodar o comando a seguir:

```sh
make
```
