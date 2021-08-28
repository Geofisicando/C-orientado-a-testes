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

# Aula 45 - Exercício sistema de entrega de pizzas utilizando pilhas (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório, basta rodar o comando a seguir:

```sh
make
```

O programa make irá compilar e rodar os testes da pilha definidos em 'test_pilha.c' e irá compilar o sistema de entregas de pizzas já com a lista de
símbolos do GDB para que você possa testar a implementação no terminal do GDB. Se você desejar fazer a compilação diretamente pelo terminal do shell
utilize o seguinte comando de compilação:

```sh
gcc -g sistema.c -o sistema.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```

## Teste da interface com expect

Você também pode testar a interface do sistema de entrega de pizzas com o script do expect 'teste.exp' disponível neste diretório. Para
tanto, você precisa ter o expect instalado na sua máquina. Utilize o comando a seguir para instalar o expect no Ubuntu:

```sh
sudo apt install expect
```

Você pode rodar o teste com o expect utilizando 'make expect', o make irá rodar o teste automaticamente. Ou você pode rodar diretamente no terminal
do shell, após a compilação do arquivo 'sistema.c' para gerar o executável 'sistema.x', com o seguinte comando:

```sh
expect ./teste.exp
```
