# Aula 67 - Como testar vetores de structs em linguagem C utilizando o Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos que os testes de variáveis do tipo ponteiro são realizados utilizando
a macro 'TEST_ASSERT_EQUAL_PTR' para verificar se os dois ponteiros apontam
para a mesma posição de memória. Basta utilizar:

```c
TEST_ASSERT_EQUAL_PTR(p1,p2);
```

Onde p1 e p2 são dois ponteiros.

A mesma macro pode ser utilizada para testar se um ponteiro aponta para o endereço de memória de uma variável. Para tanto, basta
passar o ponteiro e o endereço da variável com o operador '&' para a macro do unity:

```c
TEST_ASSERT_EQUAL_PTR(p1,&x);
```

Onde p1 é um ponteiro e x é uma variável.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```
