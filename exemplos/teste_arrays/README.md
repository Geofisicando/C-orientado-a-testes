# Aula 66 - Como testar arrays em linguagem C utilizando o Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos que os testes de arrays de inteiros no Unity são realizados utilizando
a macro 'TEST_ASSERT_EQUAL_INT_ARRAY' para verificar se os dois arrays de inteiros passados são iguais.
Para tanto basta passar os arrays e o número de elementos a serem verificados, como no exemplo a seguir:

```c
TEST_ASSERT_EQUAL_INT_ARRAY(i,j,2);
```

Verifica se os arrays de inteiros i e j são iguais até o segundo elemento.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```
