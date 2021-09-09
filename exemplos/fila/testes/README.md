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

### Exemplo de uso

Você pode compilar o programa fila.c com 'make', e o binário fila.x será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g fila.c -o fila.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb fila.x
```
