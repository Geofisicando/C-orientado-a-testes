# Aula 55 - Implementar uma estrutura de dados fila em C, função apagar

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos a função 'apagar' para remover elementos da estrutura de dados fila. A lógica da implementação
está em torno da manipulação do ponteiro da fila. Este ponteiro aponta para a primeira pessoa da fila. Então basta armazenar
a referência para esta pessoa em um ponteiro temporário e deslocar o ponteiro da fila para a próxima pessoa, isto tudo feito
se a fila não estiver vazia. Veja o código da função a seguir:

```c
FILA tmp = *f;
if(*f==NULL) return;
*f = (*f)->prox;
free(tmp);
```

A seguir, a representação esquemática do funcionamento da função 'apagar'. A fila antes da chamada à função (f é o ponteiro da fila):

  | FILA | Pessoas |
 | --- | --- |
  | | NULL |
  | | :arrow_up: |
 | | Pessoa 2 |
   | | :arrow_up: |
 | f :arrow_right: | Pessoa 1 |
 
 Daí basta deslocar o ponteiro para a Pessoa 2 e utilizar a função 'free' para liberar o espaço de memória da Pessoa 1:

 | FILA | Pessoas |
 | --- | --- |
  | | NULL |
  | | :arrow_up: |
 | f :arrow_right: | Pessoa 2 |
   | | :arrow_up: |
 | tmp :arrow_right: | Pessoa 1 |

A fila após a função 'apagar' finalizar:

 | FILA | Pessoas |
 | --- | --- |
  | | NULL |
  | | :arrow_up: |
 | f :arrow_right: | Pessoa 2 |

### Exemplo de uso

Você pode compilar o programa fila.c com 'make', e o binário fila.x será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g fila.c -o fila.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb fila.x
```
