# Aula 65 - Como testar ponteiros em linguagem C utilizando o Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Os testes de variáveis do tipo float sofrem com o problema da precisão, pois um teste pode passar com valores próximos sendo considerados iguais.
Então, o teste de igualdade entre números do tipo float precisa incluir um critério de precisão. Para tanto, utilizamos a asserção a seguir:

```c
TEST_ASSERT_FLOAT_WITHIN(0.1,2.0,2.1);
```

O primeiro valor é a precisão a ser considerada para mais ou para menos, o segundo e terceiro valor são os números a serem testados.

Para ignorar um teste no Unity, basta incluir a seguinte asserção dentro da função de teste:

```c
TEST_IGNORE();
```

O teste será ignorado mesmo que seja chamado pela função main.

No diretório exemplo temos um exemplo de uso das asseções desta aula no arquivo 'test_exemplo.c'. Para compilar e rodar o exemplo de uso basta utilizar o
seguinte comando dentro do diretório exemplo:

```sh
make
```
