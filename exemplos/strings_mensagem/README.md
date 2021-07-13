# Aula 2 - Teste unitários com strings e mensagens de erro do unity

Nesta aula nós aprendemos a testar a igualdade entre duas strings utilizando a macro do Unity a seguir:

```c
TEST_ASSERT_EQUAL_STRING("hello","oi");
```

Este teste irá falhar, pois a string "hello" é diferente da string "oi".

Exibir mensagens de erro se o teste falhar também é simples no Unity. Basta usar a macro a seguir:

```c
TEST_ASSERT_MESSAGE(2==1,"O teste falhou!");
```

Este teste irá falhar, pois 2 é diferente de 1 e não igual, e exibirá a mensagem "o teste falhou!" na tela do terminal
indicando qual o teste da suite de testes que falhou.

## Exemplo de uso

No diretório 'exemplo' tem um exemplo de uso destas macros do Unity. Para compilar e rodar o exemplo utilize o comando a
seguir:

```sh
make
```
