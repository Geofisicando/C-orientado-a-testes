# Aula 56 - Implementar os testes da estrutura de dados fila (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós iniciamos os testes da estrutura de dados fila, construímos a suíte de testes e o primeiro teste unitário para a função criar. O teste é simples,
pois a função criar apenas inicializa o ponteiro da fila como NULL, indicando que não há elementos na fila. Assim, basta checar o
ponteiro da fila após a utilização da função criar. Para tanto utilizamos a macro TEST_ASSERT_NULL como no exemplo a seguir:

```c
TEST_ASSERT_NULL(f);
```

Verifica se o ponteiro f aponta para NULL.

# Aula 57 - Implementar os testes da estrutura de dados fila (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós finalizamos os testes unitários da estrutura de dados fila para todas as funções restantes. Para o teste da função inserir,
basta inserir um elemento na fila e depois verificar se o ponteiro da fila aponta para um elemento ao invés de NULL. E o teste da função apagar
será o inverso, basta verificar se após apagar o único elemento da fila, o ponteiro da fila passa a apontar para NULL.

Daí vem o teste unitário mais importante que consiste em verificar o funcionamento da estrutura de dados fila: Inserimos alguns elementos na fila
e verificamos se os dados do primeiro elemento da fila (o elemento do ponteiro da fila estão corretos). Se apagarmos um elemento da fila, o elemento
apagado deverá ser o primeiro elemento inserido na fila, e o ponteiro da fila deverá apontar para o segundo elemento. Daí basta verificar os dados
do segundo elemento, como fizemos com o primeiro.

A seguir, a representação esquemática do funcionamento do teste. A fila antes da chamada à função apagar:

 | FILA | Pessoas | Nome | Idade |
 | --- | --- | --- | --- |
 | | NULL | | |
 | | :arrow_up: | | |
 | | Pessoa 3 | Beltrano | 22 |
 | | :arrow_up: | | |
 | | Pessoa 2 | Fulano | 44 |
 | | :arrow_up: | | |
 | :arrow_right: | Pessoa 1 | Dirack | 29 |
 
Daí basta verificar os dados da primeira pessoa da fila (referenciada pelo ponteiro da fila) com as macros do Unity, como no exemplo a seguir:
 
```c
TEST_ASSERT_EQUAL(f->idade,29);
TEST_ASSERT_EQUAL_STRING(f->nome,"Dirack");
```

A fila após a função 'apagar' finalizar será:

 | FILA | Pessoas | Nome | Idade |
 | --- | --- | --- | --- |
 | | NULL | | |
 | | :arrow_up: | | |
 | | Pessoa 3 | Beltrano | 22 |
 | | :arrow_up: | | |
 | :arrow_right: | Pessoa 2 | Fulano | 44 |

Daí basta verificar os dados da primeira pessoa da fila (referenciada pelo ponteiro da fila) com as macros do Unity, como no exemplo a seguir:

```c
TEST_ASSERT_EQUAL(f->idade,44);
TEST_ASSERT_EQUAL_STRING(f->nome,"Fulano");
```

No último teste fazemos mais uma chamada à função apagar. A fila após a função 'apagar' finalizar será:

 | FILA | Pessoas | Nome | Idade |
 | --- | --- | --- | --- |
 | | NULL | | |
 | | :arrow_up: | | |
 | :arrow_right: | Pessoa 3 | Beltrano | 22 |

Daí basta verificar os dados da pessoa que restou na fila (referenciada pelo ponteiro da fila) com as macros do Unity, como no exemplo a seguir:

```c
TEST_ASSERT_EQUAL(f->idade,22);
TEST_ASSERT_EQUAL_STRING(f->nome,"Beltrano");
```

### Exemplo de uso

Você pode compilar o programa fila.c com 'make', e o binário fila.x será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g fila.c -o fila.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb fila.x
```
