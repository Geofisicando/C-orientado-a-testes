# Aula 54 - Implementar uma estrutura de dados fila em C, função listar

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos a função 'listar' para listar os elementos da nossa estrutura de dados fila. A lógica de implementação da função é bastante
simples e também utiliza o conceito de recursão visto na [Aula 52](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/inserir#aula-52---implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-inserir-parte-1).
Após imprimir um elemento da fila no terminal com printf, a função 'listar' chama a si mesma passando a referência para a
próxima pessoa da fila, que por sua vez irá imprimir a próxima pessoa da fila na tela do terminal com printf e chamará
'listar' passando a próxima pessoa. E assim por diante até chegar ao final da fila.

```c
if(f==NULL) return;
printf("%s %d\n",f->nome,f->idade);
listar(f->prox);
```

A utilização da recursão é bastante útil para a implementação da função 'listar', mas tem as suas limitações. Pois, a cada chamada recursiva
à função listar, uma chamada é empilhada na pilha de funções. Podemos observar a pilha de funções do programa com o comando backtrace do GDB 
(ou bt na versão abreviada). As chamadas à função listar são empilhadas na pilha de funções e desempilhadas em sequência no retorno da função
'listar'.

### Exemplo de uso

Você pode compilar o programa fila.c com 'make', e o binário fila.x será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g fila.c -o fila.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb fila.x
```
