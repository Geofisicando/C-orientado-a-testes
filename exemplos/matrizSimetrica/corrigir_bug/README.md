# Aula 20 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 4)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)
[:tv: Assistir aula](https://youtu.be/wSQ_3AETtQo)

Nesta aula nós corrigimos o bug no programa da matriz simétrica unificando a lógica de atribuição e acesso dos elementos da matriz.
O problema da matriz simétrica utiliza a propriedade da matriz simétrica de ter os elementos acima e abaixo da diagonal principal
espelhados para economizar memória.

Como os elementos Aij e Aji da matriz são iguais, basta alocar memória para os elementos acima e
na diagonal principal da matriz. Exemplo, na matriz 2 por 2 abaixo:

```
1 2
2 1
```

Apenas alocamos memória para 3 elementos ao invés de 4 (dois elementos da diagonal principal e um elemento acima da diagonal principal) e
armazenamos os elementos em um vetor **v** de 3 elementos. A seguir o vetor **v** para a matriz 2 por 2 acima:

```
1
2
1
```

A matriz é armazenada por linhas no vetor **v**. Podemos obter os elementos (i,j) da matriz simétrica obtendo o índice k
do elemento no vetor **v** com o if-else abaixo:

```c
if (i>=j)
        k = i*(i+1)/2 + j;
else
        k = j*(j+1)/2 + i;
```

Assim, dado a linha i e a coluna j da matriz, obtemos o índice k do vetor e o elemento v[k] no vetor. Ou seja:

```
Aij=v[k]
```

## Exemplo de uso


Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
